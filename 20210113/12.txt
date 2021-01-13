// 11. Създайте С програма, която калкулира стойността на покупки в магазин за
// хранителни стоки. Клиентът може да закупи различна комбинация от продукти. В
// магазина има следните налични продукти и цени:
// Домати- 4.5 лв.за килограм, Брашно 1.80 лв. за килограм,
// Кисело мляко - 0.50 лв. за брой, Сладолед на фунийки 0.60 лв. броя
// Бонбони 1.50 лв. за килограм, Близалки 0.15 лв. за брой.
// Указания:
// Помислете какви променливи ще дефинирате?
// Помислете в каква последователност ще изпълнявате действията?
// В момента няма да проверяваме въведените стойности от клиента.
// printf("Здравейте, добре дошли в нашия магазин! Днес предлагаме - пресни домати,
// брашно, кисело мляко, сладолед на фунийки и близалки.\n");
// printf("Колко килограма домати ще желаете? ");
// scanf("%f",&fTomatoWeight);
// float fTomatoTotal = fTomatoWeight*fTomatoPrice;
#include <stdio.h>
int main(){
    float tomatoKgPrice = 4.5;
    int tomatoWeight;
    int flourKgPrice = 3;
    int flourWeight;
    float milk = 0.5;
    int  milkCount;
    float Lollipops = 0.15;
    int lollipopsCount;
    double rez;
    printf("Ako zelaete karavana natisnete 1\n");
    printf("Ako zelaete kemper natisnete 2\n");
    printf("Hello welcome to our store! Today we offer - fresh tomatoes flour yogurt, ice cream cones and lollipops\n");
    printf("How many kilograms of tomatoes will you want?\n");
    scanf("%d",&tomatoWeight);
    printf("How many kilograms of flour will you want?\n");
    scanf("%d",&flourWeight);
    printf("How much milks will you want?\n");
    scanf("%d",&milkCount);
    printf("How much Lollipops will you want?\n");
    scanf("%d",&lollipopsCount);
    float tomatoTotal = (float)tomatoWeight*tomatoKgPrice;
    int flourTotal = flourWeight*flourKgPrice;
    float milkTotal = (float)milkCount*milk;
    float lollipopskTotal = (float)lollipopsCount*Lollipops;
    float total = (float)flourTotal + tomatoTotal + milkTotal + lollipopskTotal;
    printf("Your sum is %f", total);

    return 0;

}