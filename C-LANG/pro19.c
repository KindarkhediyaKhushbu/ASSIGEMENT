//19.Calculate compound interest

#include <stdio.h>
#include <math.h>

int main() {
    float principal, rate, time, amount, compoundInterest;


    printf("Enter the principal amount (P): ");
    scanf("%f", &principal);
    
    printf("Enter the annual interest rate (R in percentage): ");
    scanf("%f", &rate);
    
    printf("Enter the time (t in years): ");
    scanf("%f", &time);

    amount = principal *(1 + rate / 100)*time;

    compoundInterest = amount - principal;

    printf("\nTotal Amount after %.2f years: %.2f\n", time, amount);
    printf("Compound Interest: %.2f\n", compoundInterest);
}
