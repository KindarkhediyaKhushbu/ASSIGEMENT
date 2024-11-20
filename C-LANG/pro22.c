// Calculate compound interest (Compound Interest formula:
// a.
// Formula to calculate compound interest annually is given by:
// Amount= P(1 + R/100)t
// b.
// Compound Interest = Amount – P

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
