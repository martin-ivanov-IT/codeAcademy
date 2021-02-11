#include <stdio.h>
int main(){

int arr[10] = {23,91,36,4,9,99,87,11,2,33};
int *p = arr;
++p;
int sum = 0;
int count = sizeof(arr)/sizeof(arr[0])/2;
for (int i = 0; i < count; i++)
{
    printf("%d\n",*p);
    sum+=*p;
    p+=2;

}


printf("sum is: %d",sum);

return 0;
}


