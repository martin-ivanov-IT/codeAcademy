#include <stdio.h>
int sum30(int start, int end, int sum);
int main(){

 int sum = sum30(1,10,1);
 printf("%d",sum);
 return 0;
}

int sum30 (int start, int end, int sum){
    if (start == end)
    {
        return sum;
    }
    
    sum = sum30(start, end, sum + (++start));    
     
}
