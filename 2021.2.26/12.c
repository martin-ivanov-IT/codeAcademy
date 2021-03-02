// Задача 12. Представете служителите във фирма в структура с
// членове: пореден номер, име, презиме, фамилия, позиция, трудов стаж в
// години, заплата в лева, указател към структурата, описващ неговия
// началник. Напишете програма, която въвежда 10 служителя, които се
// съхраняват в масив от описаните структури. Въвеждането на служителите
// може да стане на два паса, първо въвеждане на всички данни без
// указателя към началника и на втори пас, указване на всеки служител кой е
// неговият началник. В решението трябва да се използва динамично
// заделяне на памет и typedef.

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct String{
    char* buffer;
    int bufferSize;
}String;

typedef struct employee{
    int id;
    String vorname;
    String lastname;
    String position;
    int expirience;
    int salary;
    struct employee* boss;
}employee;

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
    employee* employees = malloc(sizeof(employee)*10);
    for (int i = 0; i < 2; i++)
    {
        printf("----%d----\n",i);
        employees[i].id = i;

        printf("enter vorname\n");
        fseek(stdin,0,SEEK_END);
        initDynamicString(&employees[i].vorname);

        printf("enter lastname\n");
        fseek(stdin,0,SEEK_END);
        initDynamicString(&employees[i].lastname);

        printf("enter position\n");
        fseek(stdin,0,SEEK_END);
        initDynamicString(&employees[i].position);

        printf("enter expirience\n");
        int expirience;
        scanf("\n%d", &expirience);
        employees[i].expirience = expirience;

        printf("enter salary\n");
        int salary;
        scanf("\n%d", &salary);
        employees[i].salary = salary;
    }

    for (int i = 0; i < 2; i++)
    {
        printf("enter the id of the boss of the employee with id: %d\n",i);
        int currId;
        scanf("\n%d",&currId);
        for (int j = 0; j < 10; j++)
        {
            if (j == currId)
            {
                employees[i].boss = &employees[j];
            }
            
        }
    }

    for (int i = 0; i < 2; i++)
    {
        printf("name: %s %s\n",employees[i].vorname.buffer, employees[i].lastname.buffer);
        printf("position: %s\n",employees[i].position.buffer);
        printf("years exp: %d\n",employees[i].expirience);
        printf("salary: %dlv\n",employees[i].salary);
        printf("id: %d\n",employees[i].id);
        printf("boss: %s %s\n",employees[i].boss->vorname.buffer, employees[i].boss->lastname.buffer);
        printf("-----\n");
    }
    
    return 0;
}