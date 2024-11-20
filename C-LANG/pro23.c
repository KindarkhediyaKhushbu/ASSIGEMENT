//WAP to calculate swap 2 numbers with using of multiplication and division.

#include<stdio.h>

void main()
{
    int a,b;

    printf("enter 2 integer number\n");
    scanf("%d %d",&a,&b);

    printf("your intered a=%d b=%d \n ",a,b);

    a=a*b;
    b=a/b;
    a=a/b;

    printf("after swapping a=%d b=%d",a,b);

}