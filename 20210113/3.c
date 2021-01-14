// 2. Да съберем пак две числа от тип char 255 + 10, да използваме функцията
// за представяне на числата в двоичен вид:

#include <stdio.h>
void bin(unsigned n) 
{ 
	unsigned i; 
	for (i = 1 << 7; i > 0; i = i >> 1 ) 
		(n & i)? printf("1"): printf("0"); 
	printf("\n");
}
int main(){
    char z = 255;
    bin(z);
    char a = 10;
    bin(a);
    bin((a+z));
    
    return 0;
}