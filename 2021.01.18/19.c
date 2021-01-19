#include <stdio.h>
int main()
{
int A = 0;
int B = 1;
printf("A = %d\n",A);
printf("B = %d\n",B);

printf("A&&B = %d\n",A&&B);
printf("!(A&&B) = %d\n",!(A&&B));
printf("A||B = %d\n",A||B);
printf("!(A||B) = %d\n",!(A||B));
printf("!A||!B = %d\n",!A||!B);
printf("!A&&!B  = %d\n",!A&&!B);

return 0;
}