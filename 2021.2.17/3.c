#include <string.h>
#include <stdio.h>
#include <stdlib.h>
int fnPlus(int nA, int nB){return(nA+nB);}
int fnMinus(int nA, int nB){return(nA-nB);}
int fnMulti(int nA, int nB){return(nA*nB);}
int fnDiv(int nA, int nB){return(nA/nB);}

int main(){

int (*func_ptr[3])() = {fnPlus,fnMinus,fnMulti};
int n, a, rez;
char sign;
printf("enter first number:\n");
scanf("\n%d",&n);
printf("enter sign :\n");
scanf("\n%c",&sign);
printf("enter second number:\n");
scanf("\n%d",&a);

if (sign == '+')
{
    rez = (*func_ptr[0])(a,n);
}

if (sign == '.')
{
    rez = (*func_ptr[2])(a,n);
}

if (sign == '-')
{
    rez = (*func_ptr[1])(n,a);
}
printf("sum is %d",rez);

 return 0;
}