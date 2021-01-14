// 2. Да направим функция, която ще принтира числата от
// десетичен в бинарен вид:
#include <stdio.h>
void bin(unsigned n) 
{ 
	unsigned i; 
	for (i = 1 << 7; i > 0; i = i >> 1 ) 
		(n & i)? printf("1"): printf("0"); 
	printf("\n");
}
int main(){
  unsigned char z = 10;
  bin (z);

    return 0;
}