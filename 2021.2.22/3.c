#include <stdio.h>
#include <string.h>
struct name
{
int variable1;
char variable2[128];
float variable3;
};
int main( ) {
    struct name newV;
    newV.variable1 = 50;
    strcpy (newV.variable2 , "Chocolate");
    newV.variable3 = 2.5;
    printf("Product: %s\n",newV.variable2);
    printf("Price: %lf\n",newV.variable3);
    printf("quantity: %d\n",newV.variable1);


    return 0;
}
