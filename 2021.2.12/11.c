// Задача 11.
// Напишете програма, в която се въвеждат пореден номер,
// име, фамилия, възраст на участници в маратон. Изискването
// е за името и фамилията да не се използват масиви с
// фиксирана дължина. След като въвеждането завърши,
// изведете списък с участниците.
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
char* createString(char* buffer, int* i){
    buffer = (char*)malloc(sizeof(char) * 2);
    int bufferSize = sizeof(char) * 2;
    char c = 0; 
    while (c!='\n')
    {
       
        if (bufferSize<= *i)
        {
            buffer = realloc(buffer,bufferSize*2);
            bufferSize*=2;
        }
        c = getchar();
        buffer[*i] = c;
        *i+=1;
    }
    buffer[*i] = '\0';
}
struct runner  
{  
    char *vorname;  
    char *lastname;  
    int id;
    int age;   
};
int main(){
char answer = 'n';
int id = 0;
struct runner* runners;
while (answer!='y')
{
    struct runner s;
    int sizeVorname = 0;
    int sizeLastname = 0;
    int* sizeVornamePtr = &sizeVorname;
    int* sizeLastnamePtr = &sizeLastname;
    char *vorname = NULL;
    char *lastname = NULL;
    printf("Enter the vorname\n");
    s.vorname = createString(s.vorname,sizeVornamePtr);
    s.id = id;
    printf("Enter the lastname\n");
    s.lastname = createString(s.lastname,sizeLastnamePtr);
    printf("vornameSize %d\n",*sizeVornamePtr);
    if (id==0)
    {
        runners = (struct runner*) malloc(sizeof(struct runner));
    }
    else{
        runners = (struct runner*) realloc(runners, sizeof(s));
    }
    printf("Enter the age\n");
    scanf("%d",&s.age);
    s.id = id;
    printf("vorname %s\n",s.vorname);
    printf("for exit press: y for another player: n\n");
    
    runners[id++] = s;
    scanf("\n%c",&answer);

}
for (int i = 0; i < id; i++)
{
    printf("%s\n",runners[i].age);
}



 return 0;
}