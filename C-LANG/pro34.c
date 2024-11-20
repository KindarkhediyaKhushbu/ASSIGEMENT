//Write a C program to accept two integers and check whether they are equal or not
#include<stdio.h>
int main()
{
    int num1,num2;

    printf("enter the frist number : ");
    scanf("%d",&num1);

    printf("enter the second number : ");
    scanf("%d",&num2);

    if(num1==num2)
    {
        printf("the number is equal.\n");
    }
    else
    {
        printf("the number is not equal.\n");
    }

    return 0;
}