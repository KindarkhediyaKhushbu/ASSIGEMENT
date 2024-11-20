//C Program to Reverse a Number Using FOR Loop
#include<stdio.h>
int main()
{
    int number,reserse=0,rem;

    printf("enter number: ");
    scanf("%d",&number);

    for(int i=0;number!=0;number/=10)
    {
        rem=number%10;
        reserse=reserse*10+rem;
    }
    printf("reserse number: %d ",reserse);

return 0;
}