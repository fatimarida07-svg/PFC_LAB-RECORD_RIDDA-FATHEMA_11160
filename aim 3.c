/* Declare variables of int,float,char,double; scanf/printf with format
specifiers,swap numbers*/

#include <stdio.h>
int main(){
    int i, a, b, temp;
    float f;
    char c;
    double d;

    printf("enter an integer, float, character, and double value: ")
    scanf("%d %f %c %lf", &i, &f, &c, &d);

    peintf("Hello, I am Ridda Fathema.\n");
    printf("Integer: %d\nFloat: %.2f\ncharacter: %.3lf\nDouble: %.3lf\n", i, f, c, d);

    printf("\nEnter two numbers to swap: ");
    scanf("%d %d", &a, &b);

    printf("Before swapping: a = %d, b = %d\n", a, b);
    temp = a;
    a = b;
    b = temp;

    printf("After swapping: a = %d, b = %d\n", a, b);

    return 0;
}