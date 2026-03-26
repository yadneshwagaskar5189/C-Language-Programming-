#include"stdio.h"

int main(){

float p ;
printf("Enter the principal Value :-"),
scanf("%f", &p);

float r ;
printf("Enter the rate of intrest :-");
scanf("%f", &r);


float t ;
printf("Enter the value of time :-");
scanf("%f", &t);
float i;
i = (p*r*t)/100;
printf("interest is ::- %f" , i);
return 0;

}