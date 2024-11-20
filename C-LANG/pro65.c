//WAP to print Fibonacci series up to given numbers
#include<stdio.h>
int main()
{
    int a=0,b=1,j,next;

    printf("enter number: ");
    scanf("%d",&j);
    printf("%d %d",a,b);
    next=a+b;
    for(int i=3; i<=j; i++)
    {
        printf(" ,%d",next);
        a=b;
        b=next;
        next=a+b;

    }
return 0;
}