//28.Convert years into days and months

#include<stdio.h>
int main()
{
    float year,day,month;

    printf("enter no of year: ");
    scanf("%f",&year);

    printf("enter year into day: ");
    scanf("%f",&day);

    day=year*365.00;
    month=year*12.00;
    printf("%.2f Years Equal to %.2f DAYS",year,day);
    printf("\n%.2f YEARS Equal to %.2f MONTHS",year,month);
}