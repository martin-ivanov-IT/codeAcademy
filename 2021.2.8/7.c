// 7. Напишете един глобален масив, който съдържа на всяка позиция броя на
// дните от месеца. Направете функция, която на която се подават като
// аргументи година, месец и ден. На база на това функцията трябва да върне
// поредния ден от годината. Например 1 март е 60 тия ден от годината

#include <stdio.h>
#include <string.h>
int isLeap(int year);
int getSum(int* calendar,int month, int day);
int main(){
    int calendar[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
    int year;
    int month;
    int day;
   printf("Enter a year: \n");
   scanf("%d", &year);
   
   printf("Enter a month with digit: \n");
   scanf("%d", &month);

   printf("Enter a day: \n");
   scanf("%d", &day);

    if (isLeap(year))
    {
        calendar[1] = 29;
    }
    if (day > calendar[month - 1])
    {
        printf("invalid day!");
        return 0;
    }
    

    int sum = getSum(calendar,month,day);
    printf("sum is: %d",sum);
    
    return 0;
}
int getSum(int* calendar,int month, int day){
    int sum = 0;
    for (int i = 0; i < month-1; i++)
    {
        sum += calendar[month];
    }
    sum += day;
    return sum;
    
}

int isLeap(int year){
    // leap year if perfectly visible by 400
   if (year % 400 == 0) {
      return 1;
   }
   // not a leap year if visible by 100
   // but not divisible by 400
   else if (year % 100 == 0) {
      return 0;
   }
   // leap year if not divisible by 100
   // but divisible by 4
   else if (year % 4 == 0) {
      return 1;
   }
   // all other years are not leap year
   else {
     return 0;
   }
}
