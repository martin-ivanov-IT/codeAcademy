#include <stdio.h>
int main(){
typedef long long int t_lli;
t_lli a = 5;
printf("%lld\n",a);
typedef t_lli* t_lli_p;
t_lli_p p = &a;
 *p = 3; 
 printf("%lld\n",a);
 return 0;

}




