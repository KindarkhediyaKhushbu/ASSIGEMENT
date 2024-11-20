//WAP to find minimum number among 3 numbers using ternary operator
#include<stdio.h>
int main()
{
    int num1,num2,num3;

    printf("enter three number: ");
    scanf("%d %d %d",&num1,&num2,&num3);

    int min=(num1<num2)?((num1<num3)?num1:num3):((num2<num3)?num2:num3);

    printf("the minimum number is: %d\n",min);
return 0;
}