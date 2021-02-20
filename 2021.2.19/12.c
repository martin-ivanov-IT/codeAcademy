#include <stdio.h>
#include <string.h>
#include <math.h>
struct point {
 int x;
 int y;
};
int calcDisatnce(struct point a, struct point b);
int main( ) {
    struct point a = {25,15};
    struct point b = {35,10};
    printf("%d",calcDisatnce(a,b));
    
    return 0;
}
int calcDisatnce(struct point a, struct point b){
   int  gdistance = ((b.x-a.x)*(b.x-a.x))+((b.y-a.y)*(b.y-a.y));
   return sqrt(gdistance);
}