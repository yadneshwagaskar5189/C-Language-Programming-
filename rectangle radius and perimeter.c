#include"stdio.h"
int main (){
    int a,b;
    int r , area;
    int l, lenght;
    printf("Enter lenght::");
    scanf("%f", &l);

    int w , width;
    printf("Enter width");
    scanf("%f", &w);
    area = l*w;
    printf ("area= %d\n", area);
    return 0;
}