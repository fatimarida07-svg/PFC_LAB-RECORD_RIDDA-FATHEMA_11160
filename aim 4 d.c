#include <stdio.h>

int main(){
    //largest number using ternary operator
    int a, b, max;
    printf("Hello, I am Ridda Fathema\n");

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    max = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);

    printf("Max = %d\n", max);

    return 0;
}