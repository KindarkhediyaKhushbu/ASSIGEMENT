//WAP to convert years into days and days into years


#include<stdio.h>
int main()
{
    float year,day;

    printf("enter number of year: ");
    scanf("%f",&year);

    day=year*365.00;
   

    printf("day=%.2f year=%.2f",year,day);
}

