//WAP to print number in reverse order e.g.: number = 64728 ---> reverse = 82746
#include<stdio.h>
int main()
{
    int number,reserse=0,rem;

    printf("enter number: ");
    scanf("%d",&number);

    while(number!=0)
    {
        rem=number%10;
        reserse=reserse*10+rem;
        number/=10;
    }
    printf("reserse number: %d ",reserse);

return 0;
}