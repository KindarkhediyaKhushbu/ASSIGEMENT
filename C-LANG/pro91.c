//WAP to find factorial using recursion

#include<stdio.h>
int factorial(int n)
{
    if (n < 0) {
        return -1;
    }
    if (n == 0 || n == 1) {
        return 1; 
    }
    return n * factorial(n - 1); 
}

int main()
{
    int number;

    printf("Enter a non-negative integer: ");
    scanf("%d", &number);

    if (number < 0)
    {
        printf("Error: Factorial is not defined for negative numbers.\n");
    } else 
    {
        unsigned long long result = factorial(number);
        printf("Factorial of %d is %llu\n", number, result);
    }
return 0;
}