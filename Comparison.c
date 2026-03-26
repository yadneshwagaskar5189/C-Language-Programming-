#include <stdio.h>

int main() {
    int a, b;
    printf("Enter the value of a and b: ");
    scanf("%d%d", &a, &b);

    if (a < b)
        printf("Value of b is greater\n");
    else if (a > b)
        printf("Value of a is greater\n");
    else
        printf("Both values are equal\n");

    return 0;
}

