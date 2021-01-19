#include <stdio.h>
int main() {
int nA;
int nB;
int nY;
int nX;
scanf("%d\n",&nA);
scanf("%d\n",&nB);
scanf("%d\n",&nY);
scanf("%d",&nX);
if ( nA > nB && nA !=0 ) {
printf("&& Operator : Both conditions are true\n");
}

if ( nX > nY || nY != 20) {
printf("|| Operator : Only one condition is true\n");
}
if ( ! (nA > nB && nB !=0 ) ) {
printf(" ! Operator : Both conditions are true\n");
} else {
printf("Both conditions are true.\n");
}
return 0;
} 
