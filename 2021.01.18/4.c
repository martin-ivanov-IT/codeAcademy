#include <stdio.h>

int main(){
    
    int x = 10;
    int y = 10;
    int true,false;
    true = x&&y&x<<1;
    printf("true = %d\n", true);
    true = x&&y^x<<1;
    printf("true = %d\n", true);
    
 return 0;
}

