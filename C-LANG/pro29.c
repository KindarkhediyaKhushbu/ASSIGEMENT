//29.Convert minutes into seconds and hours

#include<stdio.h>
int main()
{
    int minutes,second,hours,minutes1;

    printf("enter no of minutes: ");
    scanf("%d",&minutes);

    printf("enter minutes hours: ");
    scanf("%d",&minutes1);

    second=minutes*60;
    hours=minutes1/60;
   

    printf("minutes =%d second=%d hours=%d" ,minutes,second,hours);
}