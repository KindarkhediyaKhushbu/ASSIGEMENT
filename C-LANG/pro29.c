//29.Convert minutes into seconds and hours

#include<stdio.h>
int main()
{
    float minutes,second,hours,minutes1;

    printf("enter no of minutes: ");
    scanf("%f",&minutes);

    printf("enter minutes hours: ");
    scanf("%f",&minutes1);

    second=minutes*60.00;
    hours=minutes1/60.00;
   

    printf(" second=%.2f hours=%.2f" ,second,hours);
}