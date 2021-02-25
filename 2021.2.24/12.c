#include <stdio.h>
int int_max(int x, int y){
return x > y ? x : y;
}

float float_max(float x, float y){
return x > y ? x : y;
}

char char_max(char x, char y){
return x > y ? x : y;
}
#define PRINT(x) (#x) 
#define GENERIC_MAX(t,x,y)\
{\
 if( typeof(x) == double ) {\
    printf("doubleVar is of type double!");\
}\
\
}

int main(void) {
GENERIC_MAX(int,5,6);
return 0;
}