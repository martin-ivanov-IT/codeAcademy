#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct String{
    char** buffer;
    int bufferSize;
}String;

struct employee {
 int id;
 char*** vorname;
 char*** lastname;
 int age;
};

void initString(String s){
   s.bufferSize = sizeof(char) * 2;
}

void fillDynamicString(String s){
    char c = 0;
    int i = 0;
    char * buffer; 
    buffer = (char*)malloc(sizeof(char) * 2);
    while (c!='\n')
    {
        if (s.bufferSize<= i)
        {
            buffer = realloc(buffer,s.bufferSize*2);
            s.bufferSize*=2;
        }
        c = getchar();
        buffer[i] = c;
        ++i;
    }
    buffer[i] = '\0';
    s.buffer = &buffer;
}

int main( ) {
    struct employee employees[10];
    for (int i = 0; i < 2; i++)
    {
        struct employee emp;
        printf("----%d----\n",i);
        emp.id = i;

        printf("enter vorname\n");
        String vorname;
        fillDynamicString(vorname);
        emp.vorname = &vorname.buffer;
        
        printf("enter lastname\n");
        String lastName;
        initString(lastName);
        fillDynamicString(lastName);
        emp.lastname = &lastName.buffer;

        printf("enter age\n");
        int age;
        scanf("\n%d",&age);
        emp.age = age;
        employees[i] = emp;
    }

    for (int i = 0; i < 2; i++)
    {
        printf("name: %s %s\n",**employees[i].vorname, **employees[i].lastname);
        printf("age: %d\n",employees[i].age);
        printf("id: %d\n",employees[i].id);
        printf("-----\n");
    }
    
    return 0;
}