//WAP to print factorial of given number
#include<stdio.h>
int main()
{
    int i,fact=1, number;

    printf("enter number: ");
    scanf("%d",&number);

    for(int i=1; i<=number; i++)
    {
        fact=fact*i;
    }
    printf("factriol number %d is %d",number,fact);

return 0;
}