//WAP to find number is even or odd using ternary operator
#include<stdio.h>
int main()
{
    int number;

    printf("enter the number : ");
    scanf("%d",&number);

    if(number<0)
    {
        printf("number is even\n");
    }
    else if(number>=9)
    {
        printf("number is old\n");
    }
    else
    {
        printf("number is even old\n");
    }
    return 0;
}