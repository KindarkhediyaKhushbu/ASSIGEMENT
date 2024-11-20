//.Write a C program to calculate profit and loss on a transaction.
#include<stdio.h>
int main()
{
    int cp,sp,amt;

    printf("enter cost price: ");
    scanf("%d",&cp);

    printf("enter seling price: ");
    scanf("%d",&sp);

    if(sp>cp)
    {
        amt=cp-sp;
        printf("profit=%d",amt);
    }
    else if(cp>sp)
    {
        amt=sp-cp;
        printf("sloss=%d",amt);
    }
    else
    {
        printf("no profit no loss");
    }
return 0;
}