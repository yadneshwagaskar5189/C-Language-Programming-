#include"stdio.h"

int main() {
    int a;
    printf("Your Birth year:-");
    scanf("%d", &a);

    int b;
    printf("Current year:-");
    scanf("%d", &b);

    int age = b-a;
    printf("Your age is:- %d \n",age);
    return 0;
} 