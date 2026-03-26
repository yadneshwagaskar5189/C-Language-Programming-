#include"stdio.h"
#define PI 3.1416
int main(){
float r, area;
printf("enter radius:");
scanf("%f", &r);
area = PI*r*r;
printf("area=%f\n", area);
return 0;
}
