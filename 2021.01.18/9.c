#include <stdio.h>
int main()
{
int iX = 13;
int iY = 44;
int iResult = 0;
iResult = iX - iY;
printf("%d - %d = %d \n", iX, iY, iResult);
iResult = iY / iX;
printf("%d / %d = %d \n", iY, iX, iResult);
iResult = iY % iX;
printf("%d / %d Remainder: %d\n", iY, iX, iResult);
iResult = iY * iX;
printf("%d * %d = %d \n", iY, iX, iResult);
iResult = iY + iX;
printf("%d + %d = %d \n", iY, iX, iResult);

float fX = 13.5;
float fY = 44.6;
float fResult = 0;
fResult = fX - fY;
printf("%f - %f = %f \n", fX, fY, fResult);
fResult = iY / iX;
printf("%f / %f = %f \n", fY, fX, fResult);
fResult = iY % iX;
printf("%f / %f Remainder: %f\n", fY, fX, fResult);
fResult = iY * iX;
printf("%f * %f = %f \n", fY, fX, fResult);
fResult = iY + iX;
printf("%f + %f = %f \n", fY, fX, fResult);


/* homework: examples for '*' и '+', float - използвайте вместо int
*/
return 0;
}