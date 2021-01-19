#include <stdio.h>
int main()
{
    int nA = 1;
    int nB = ( nA == 1 ? 2 : 0 ); 
    scanf("%d/n",&nA);
    printf("A value is %d\n", nA);
    printf("B value is %d\n", nB);

    //b
    int max = nA>nB ? nA : nB;
    printf("max value %d",max);
    return 0;

}
