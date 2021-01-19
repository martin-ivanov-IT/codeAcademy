#include <stdio.h>
#include <unistd.h>
int vzemiBitna(int a, int pos);
int countBits(int n);

int main()
{
for (int i = 0; i <10; i++)
{
    int count = countBits(i);
    for (int j = 0; j < count; j++)
    {
        if (vzemiBitna(i,j)==1)
        {
            printf("*");
        }
        else{
            printf(".");
        }
        sleep(1);
    }
    printf("\n");
    
    
}

return 0;
}

int vzemiBitna(int a, int pos){
    int h = 1;
    a = a>>pos;
    a = a & h;
    return a;
}

int countBits(int n) 
{ 
    int count = 0; 
    while (n) 
    { 
        count++; 
        n >>= 1; 
    } 
    return count; 
} 