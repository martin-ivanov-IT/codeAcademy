#include "sjlj.h"
#include <stdlib.h>
jmp_buf buf;
int main() {
if(sj("Vasko", buf) != 0) exit(0);
lj(3,buf);
return 0;
}