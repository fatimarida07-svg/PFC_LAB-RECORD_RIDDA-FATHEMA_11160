//Explain return vs printf in functions with code examples.

//return function
#include <stdio.h>

int add(int a, int b) {
    return a + b;   // returns value to main()
}

int main() {
    int result;
    result = add(10, 20);
    printf("Sum = %d", result);
    return 0;
}

//printf function
#include <stdio.h>

void add(int a, int b) {
    printf("Sum = %d", a + b);
}

int main() {
    add(10, 20);
    return 0;
}

