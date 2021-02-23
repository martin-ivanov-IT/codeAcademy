// Задача 6.Опишете времето: часове:минути:секунди като структура
// tagTMyTime. Използвайки тази структура, дефинирайте следните функции:
// добавяне на секунди, добавяне на минути. добавяне на часове към дадена
// променлива от тип struct tagTMyTime. Напишете следните функции:
// връщане на броя секунди за дадена променлива от въведения
// тип и обратна функция от секундите да се генерира променлива
// tagTMyTime. Напишете две функции, които изваждат и събират две
// променливи от тип struct tagMyTime и връщат променлива от същия тип.
// Използвайте тези функции, за да се уверите, че работят коректно.
#include <stdio.h>
#include <string.h>
struct time {
 int hours;
 int minutes;
};
struct time secondsToTime(int secs);
int timeToSeconds(struct time* t);
void addHoursFunc(int hours, struct time* time);
void addMinsFunc(int mins, struct time* time);
int main( ) {
    int addMinutes;
    int addHour;
    struct time t = {2,15};
    printf("add minutes\n");
    scanf("\n%d",&addMinutes);
    addMinsFunc(addMinutes,&t);
    printf("time is: %d : %d\n",t.hours,t.minutes);

    printf("add hours\n");
    scanf("\n%d",&addHour);
    addHoursFunc(addHour,&t);
    printf("time is: %d : %d\n",t.hours,t.minutes);
    printf("this to seconds: %d\n",timeToSeconds(&t));
    int seconds;
    printf("enter seconds:", seconds);
    scanf("\n%d",&seconds);
    struct time t2 = secondsToTime(seconds);
    printf("time is: %d : %d\n",t2.hours,t2.minutes);
    
    return 0;
}
void addHoursFunc(int hours, struct time* time){
   int newHours = time->hours + hours;
   if (newHours>24)
   {
       newHours%=24;
   }
   time->hours = newHours;
}
void addMinsFunc(int mins, struct time* time){
    int allMins = time->minutes + mins + (time->hours*60);
    int hours = allMins/60;
    int newMins = allMins - hours*60;
    time->hours = hours;
    time->minutes = newMins;
    
}

struct time secondsToTime(int secs){
    int allMins = secs/60;
    struct time t = {0,0};
    addMinsFunc(allMins, &t);
    return t;
}

int timeToSeconds(struct time* t){
    int allMins = t->minutes + (t->hours*60);
    return allMins*60;
}