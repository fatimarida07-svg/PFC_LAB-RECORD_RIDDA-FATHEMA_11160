//Write a function that returns the square of a number.

#include <stdio.h>

int square(int n) {
    return n * n;
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Square of %d is %d", num, square(num));

    return 0;
}
