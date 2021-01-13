// 12. Напишете програма PrintPatterns, която отпечата следните текстови графики
// на екрана. Графиките една под друга
#include <stdio.h>
void print(int n, int k);
int main(){
    int n = 11;
    print(11,0);

}

void print(int n, int k){
if (n<=0)
{
    return;
}
for (int i = 0; i <= k; i++)
{
    printf(" ");
}

for (int i = 0; i < n; i++)
{
    printf("*");
}


printf("\n");
print(n-2,k+1);
}