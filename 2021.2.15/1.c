#include <string.h>
#include <stdio.h>
#include <stdlib.h>
static char *name[] = {
"Illegal month",
"January", "February", "March",
"April", "May", "June",
"July", "August", "September",
"October", "November", "December"};
char *month_name(int n){
    return name[n];
}
int main(){
    printf("Enter month:");
    int n;
    scanf("\n%d",&n);
    printf("%s",month_name(n));

 return 0;
}
