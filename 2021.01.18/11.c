#include <stdio.h>
int main() {
int iCounter = 0;
while( ++ iCounter < 3 ) {
printf("Counter %d\n", iCounter);
printf("++ Counter: %d\n", ++ iCounter);
printf("-- Counter: %d\n", -- iCounter);
printf("Counter ++: %d\n", iCounter ++);
printf("Counter --: %d\n", iCounter --);
}
for ( long long int i = 0; i <2147483690 ; i++)
{
  iCounter++;

}
printf("Counter %d\n", iCounter);
return 0;
} 

