#include"stdio.h"

int main(){
   int physics, chemistry, maths, total;
   float percentage;
   printf("Name : Yadnesh Satyawan wagaskar\n");

   printf("Enter marks of physics:");
   scanf("%d", &physics);

   printf("Enter marks of chemistry:");
   scanf("%d", &chemistry);

   printf("Enter marks of maths:");
   scanf("%d", &maths);

   total= physics + chemistry + maths;
   percentage = (total / 300.0  )* 100;

   printf("total marks :- %d\n", total);
   printf("percentage :- %.2f\n", percentage);



}