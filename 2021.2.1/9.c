#include <stdio.h>
#include <string.h>
void itoa(int n, char s[]);
void getReversed(char s[]);
int main()
{
    int n = 0;
    char s[20];
    printf("Enter the deciaml value: ");
    scanf("%d", &n);
    itoa(n, s);
    return 0;
}
void itoa(int n, char s[])/
{
    int i = 0, sign = n;

    if (n < 0)
        n = -n;
    do                         
    {
        s[i++] = n % 10 + '0';
        n /= 10;
    } while (n > 0);
    if (sign < 0)
        s[i++] = '-';
    
    getReversed(s);
    printf("The string value is: %s", s);
}
void getReversed(char s[])   
{
    for (int i = 0, j = strlen(s) - 1; i < j; i++, j--)
    {
        char temp = s[i];
        s[i] = s[j];
        s[j] = temp;
    }
}