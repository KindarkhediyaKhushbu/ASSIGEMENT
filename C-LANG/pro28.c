//28.Convert years into days and months

#include<stdio.h>
int main()
{
    int year,day,month;

    printf("enter no of year: ");
    scanf("%d",&year);

    printf("enter year into day: ");
    scanf("%d",&day);

    day=year*365;
    month=year*12;
    printf("%d Years Equal to %d DAYS",year,day);
    printf("\n%d YEARS Equal to %d MONTHS",year,month);
}