#include <stdio.h>
#include <string.h>
#include <stdlib.h>

static const char *Jason_FORMAT_PERSON_IN = "{\"vorname\":\"[^\"]\",\"lastname\":\"[^\"]\", \"age\"%d,\"id\"%d}";
static const char *Jason_FORMAT_PERSON_OUT = "{\"vorname\":\"%s\",\"lastname\":\"%s\", \"age\"%d, \"id\"%d}";

 typedef struct String{
    char* buffer;
    int bufferSize;
}String;

typedef struct  {
 int id;
 String vorname;
 String lastname;
 int age;
}player;

void sortByVorname(player dictionary[], int size) {
    int i, j;
    char temp[100];
    for(i = 0; i <=  size; ++i) {
        for(j = i + 1; j <= size; j++) {
            if(strcmp(dictionary[i].vorname.buffer, dictionary[j].vorname.buffer) > 0) {
                player temp = dictionary[i];
                dictionary[i] = dictionary[j];
                dictionary[j] = temp;
            }
        }
    }
}

void sortByLastname(player dictionary[], int size) {
    int i, j;
    char temp[100];
    for(i = 0; i <=  size; ++i) {
        for(j = i + 1; j <= size; j++) {
            if(strcmp(dictionary[i].lastname.buffer, dictionary[j].lastname.buffer) > 0) {
                player temp = dictionary[i];
                dictionary[i] = dictionary[j];
                dictionary[j] = temp;
            }
        }
    }
}
void initDynamicString(String* s){
    char c = 0;
    int i = 0;
    char * buffer; 
    buffer = (char*)malloc(sizeof(char) * 2);
    while (c!='\n')
    {
        if (s->bufferSize<= i)
        {
            buffer = realloc(buffer,s->bufferSize*2);
            s->bufferSize*=2;
        }
        c = getchar();
        buffer[i] = c;
        ++i;
    }
    buffer[i-1] = '\0';
    s->buffer = buffer;
}

int main( ) {
    player* players;
    int playersCount;
    FILE *countInFile;
    countInFile = fopen("cntpls.txt","r");
    char s[10];
    fgets(s,10,countInFile);
    playersCount = atoi(s);

    players = malloc(playersCount*sizeof(player));
    for (int i = 0; i < playersCount; i++)
    {
        char s[20];
        sprintf(s, "Personi%d.dat", i);
        FILE *jfp;
        jfp = fopen(s,"r");
        char vorname [60];
        char lastname [60];
        fscanf(jfp, Jason_FORMAT_PERSON_IN, vorname,lastname, &players[i].age, &players[i].id);
        printf("name %s\n", vorname);
    }
    
  
    sortByLastname(players, playersCount-1);
    sortByVorname(players, playersCount-1);
    
    FILE *list;
    list = fopen("list.txt","wt");
    fclose(list);
    list = fopen("list.txt","a");
    fseek(stdin,0,SEEK_END);
    for (int i = 0; i < playersCount; i++)
    {
        fprintf(list, Jason_FORMAT_PERSON_OUT, players[i].vorname.buffer,players[i].lastname.buffer, players[i].age, players[i].id);
    }
    
    return 0;
}