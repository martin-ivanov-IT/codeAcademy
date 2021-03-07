#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "p.h"

int main(){
    double tempVrahVihren;
    double tempHizhaVetren;
    int answer;
    printf("enter temp on Vrah Vetren or temp on Hizha Vetrgen\n1 for Vrah Vetren \n2 for Hizha Vetren\n");
    scanf("%d",&answer);
    fflush(stdin);
    if (answer == 1){
        printf("enter temp on Vrah Vetren\n");
        scanf("%lf",&tempVrahVihren);
        fflush(stdin);
        tempHizhaVetren = calcHizha(tempVrahVihren);
    }
    else{
        printf("enter temp on Hizha Vetren\n");
        scanf("%lf",&tempHizhaVetren);
        fflush(stdin);
        tempVrahVihren = calcVrah(tempHizhaVetren);
    }
    printf("Vrah: %lf\n",tempVrahVihren);
    printf("Hizha: %lf\n",tempHizhaVetren);
    
    return 0;
}
