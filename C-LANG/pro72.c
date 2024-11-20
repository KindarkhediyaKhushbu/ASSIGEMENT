//calculate the Factorial of a Given Number using while loop
#include<stdio.h>
int main()
{
    int number, factorial = 1;

    printf("Enter a number: ");
    scanf("%d", &number);

    while(number > 1) {
        factorial = factorial * number;
        number--;
    }

    printf("Factorial is: %d", factorial);
return 0;
}