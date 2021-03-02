#include <stdio.h>
#include <string.h>
#include <stdlib.h>

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
    printf("how many players?\n");
    scanf("%d",&playersCount);
    players = malloc(playersCount*sizeof(player));
    for (int i = 0; i < playersCount; i++)
    {
        printf("----%d----\n",i);
        players[i].id = i;

        printf("enter vorname: \n");
        fseek(stdin,0,SEEK_END);
        initDynamicString(&players[i].vorname);
    
        printf("enter lastname: \n");
        fseek(stdin,0,SEEK_END);
        initDynamicString(&players[i].lastname);

        printf("enter age\n");
        scanf("\n%d",&players[i].age);
    }
    sortByLastname(players, playersCount-1);
    sortByVorname(players, playersCount-1);
    
    printf("the list\n");
    fseek(stdin,0,SEEK_END);
    for (int i = 0; i < playersCount; i++)
    {
        printf("-----\n");
        printf("vorname: %s\n",players[i].vorname.buffer);
        printf("lastname: %s\n",players[i].lastname.buffer);
        printf("age: %d\n",players[i].age);
        printf("id: %d\n",players[i].id);
        printf("-----\n");
    }
    
    return 0;
}