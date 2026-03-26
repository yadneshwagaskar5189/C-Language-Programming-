#include"stdio.h"
int main (){
    int a,b;
    int r , perimeter, area;
    int L, lenght;
    printf("Enter lenght::");
    scanf("%d", &L);

    int W, width;
    printf("Enter width::");
    scanf("%d", &W);

    perimeter = 2 * (L+W);
    printf("perimeter=%d\n", perimeter);
    area = L*W;
    printf ("area= %d\n", area);
    return 0;
}