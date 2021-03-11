#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <errno.h>
FILE *errors = NULL;
FILE *succes = NULL;
char*errorFileName = "errors.txt";
char*succesFileName = "function_name() success.txt";



int errnum;

typedef struct 
{
    int grams;
    int volume;
    int priceForDelivery;

} package;

void calcDeliveryPrice(package* pack){
    if (pack->grams<=20)
    {
        pack->priceForDelivery = 46;
    }
    else if (pack->grams<=50)
    {
        pack->priceForDelivery = 69;
    }
    else if (pack->grams<=100)
    {
        pack->priceForDelivery = 102;
    }
    else if (pack->grams<=200)
    {
        pack->priceForDelivery = 175;
    }
    else if (pack->grams<=350)
    {
        pack->priceForDelivery = 213;
    }
    else if (pack->grams<=500)
    {
        pack->priceForDelivery = 244;
    }
    else if (pack->grams<=1000)
    {
        pack->priceForDelivery = 320;
    }
    else if (pack->grams<=2000)
    {
        pack->priceForDelivery = 427;
    }
    else if (pack->grams<=3000)
    {
        pack->priceForDelivery = 503;
    }

    if(pack->volume<=10){
        pack->priceForDelivery+=1;
    }
    else if(pack->volume<=50){
        pack->priceForDelivery+=11;
    }
    else if(pack->volume<=100){
        pack->priceForDelivery+=22;
    }
    else if(pack->volume<=150){
        pack->priceForDelivery+=33;
    }
    else if(pack->volume<=250){
        pack->priceForDelivery+=56;
    }
    else if(pack->volume<=400){
        pack->priceForDelivery+=150;
    }
    else if(pack->volume<=500){
        pack->priceForDelivery+=311;
    }
    else if(pack->volume<=600){
        pack->priceForDelivery+=489;
    }
    else{
        pack->priceForDelivery+=579;
    }
    succes = fopen ("hjahbsda.sad", "r");
     
     
}

int main()
{
    
    errors = fopen("errors.txt","wt");  
    int countPacks;
    printf("how many packages:\n");
    scanf("%d",&countPacks);
    fflush(stdin);
    package* packages = malloc(sizeof(package)*countPacks);
    package whole = {0,0,0};
    int sum = 0;
    for (int i = 0; i < countPacks; i++)
    {
        printf("package NO %d:\n",i+1);
        printf("enter volume:\n");
        scanf("%d",&packages[i].volume);
        fflush(stdin);
        printf("enter grams:\n");
        scanf("%d",&packages[i].grams);
        fflush(stdin);
        calcDeliveryPrice(&packages[i]);

        
        if( NULL == succes ) {
        fprintf(errors,"\nerrno: %d : %s\n", errno, strerror(errno));  
        }
        sum += packages[i].priceForDelivery;
        whole.grams += packages[i].grams;
        whole.volume += packages[i].volume;
    }
    calcDeliveryPrice(&whole);
    printf("price for whole at once %lf\n",(double)whole.priceForDelivery/100);
    printf("price for sepatated %lf\n",(double)sum/100);
    if (whole.priceForDelivery < sum)
    {
        printf("better as one package\n");
    }
    else{
        printf("better separated\n");
        
    }
    

    
    return 0;
}
