//Write a program you have to make a summation of first and last Digit. (E.g., 1234 Ans: -5)
#include<stdio.h>
int main()
{
    int a,n,sum=0;

    printf("enter number: ");
    scanf("%d",&n);

    a=n%10;
    sum=a;
    while (n!=0)
    {
        a=n%10;
        n/=10;
    }
    sum=sum+a;
    printf("summation of first and last Digit: %d",sum);
return 0;
}