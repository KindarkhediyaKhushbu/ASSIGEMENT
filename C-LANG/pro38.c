//Check Number Is Positive or Negative

#include<stdio.h>
int main()
{
    float number;

    printf("enter the number : ");
    scanf("%f",&number);

    if(number>0)
    {
        printf("%.2f number is positive \n",number);
    }
    else if(number<0)
    {
        printf("%.2f number of negative");
    }
    else
    {
        printf("the number is zero\n ");
    }
return 0;
}