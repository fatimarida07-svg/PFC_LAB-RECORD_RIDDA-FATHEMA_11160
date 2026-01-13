//Write functions for prime number check and factorial of a number.

#include <stdio.h>
/* Function to check whether a number is prime */
int isPrime(int n)
{
    int i;
    
    if (n <= 1)
        return 0;

    for (i = 2; i < n; i++)
    {
        if (n % i == 0)
            return 0;
    }
    return 1;
}

/* Function to find factorial of a number */
int factorial(int n)
{
    int i, fact = 1;

    for (i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    return fact;
}

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    /* Prime check */
    if (isPrime(num))
        printf("The number is Prime\n");
    else
        printf("The number is Not Prime\n");

    /* Factorial */
    printf("Factorial of %d is %d\n", num, factorial(num));

    return 0;
}
