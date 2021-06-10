
#include <stdio.h>
#include <stdlib.h>

#include <stdio.h>
 int main(int argc, char* argv[]){
    int a = atoi(argv[1]);
    int index = atoi(argv[2]);
    if(index < 0){
		exit(1);
	}
    int mask=1<<index;
    a=a^mask;
    printf("result: %d\n",a);
return 0;
}