#include <stdio.h>
int xorshift(int A);
int main()
{
int A = 1;
for (int i = 0; i < 5; i++)
{
    printf("%d\n",A);
    A = xorshift(A);
}



return 0;
}
int xorshift(int A){
    A ^= A << 13;
    A ^= A >> 17;
    A ^= A << 5;
    return A;
}