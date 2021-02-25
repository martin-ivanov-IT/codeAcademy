#include <stdio.h>
#define MY_STR(x)#x
int main() {
 int nValue = 0;
 printf(MY_STR(Pesho));
 return 0;
}