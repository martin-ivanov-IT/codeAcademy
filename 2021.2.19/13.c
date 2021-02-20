// Задача 13. Представете служителите във фирма в структура с членове:
// пореден номер, име, презиме, фамилия, позиция, трудов стаж в години,
// заплата в лева, указател към структурата, описващ неговия началник.
// Напишете програма, която въвежда 10 служителя, които се съхраняват в
// масив от описаните структури. Въвеждането на служителите може да стане
// на два паса, първо въвеждане на всички данни без указателя към
// началника и на втори пас, указване на всеки служител кой е неговият
// началник
#include <stdio.h>
#include <string.h>
struct employee {
 int id;
 char vorname[20];
 char lastname[20];
 char position[50];
 int expirience;
 int salary;
 struct employee* boss;
};

int main( ) {
    struct employee employees[10];
    for (int i = 0; i < 10; i++)
    {
        struct employee emp;
        printf("----%d----\n",i);
        emp.id = i;

        printf("enter vorname\n");
        char currVorname[20];
        scanf("\n%s",currVorname);
        strcpy(emp.vorname,currVorname); 

        printf("enter lastname\n");
        char lastname[20];
        scanf("\n%s",lastname);
        strcpy(emp.lastname,lastname);

        printf("enter position\n");
        char position[20];
        scanf("\n%s",position);
        strcpy(emp.position,position);

        printf("enter expirience\n");
        int expirience;
        scanf("\n%d", &expirience);
        emp.expirience = expirience;

        printf("enter salary\n");
        int salary;
        scanf("\n%d", &salary);
        emp.salary = salary;

        employees[i] = emp;
    }

    
    for (int i = 0; i < 10; i++)
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

    for (int i = 0; i < 10; i++)
    {
        printf("name: %s %s\n",employees[i].vorname, employees[i].lastname);
        printf("position: %s\n",employees[i].position);
        printf("years exp: %d\n",employees[i].expirience);
        printf("salary: %dlv\n",employees[i].salary);
        printf("id: %d\n",employees[i].id);
        printf("boss: %s %s\n",employees[i].boss->vorname, employees[i].boss->lastname);
        printf("-----\n");
    }
    
    
    
    return 0;
}