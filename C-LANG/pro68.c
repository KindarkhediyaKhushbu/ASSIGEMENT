//Write a program make a summation of given number (E.g., 1523 Ans: -11)
#include<stdio.h>
int main()
{
    int number,a,sum=0;

    printf("enter number: ");
    scanf("%d",&number);

    while (number!=0)
    {
        a=number%10;
        sum=sum+a;
        number/=10;
    }
    printf("sum is: %d",sum);
    
return 0;
}