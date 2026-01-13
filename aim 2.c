/* Draw flowcharts for sum & largest of two numbers, implement the program in
c, show VS code shortcuts */

#include <stdio.h>

int main()
{
    int a, b, sum, largest;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    sum = a + b;
    largest = (a > b) ? a : b;

    printf("Hello,I am Ridda Fathema")
    printf("Sum of %d and %d\n", a, b, sum);
    printf("Largest number = %d\n", largest);

    return 0;
}
