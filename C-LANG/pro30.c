//WAP to convert years into days and days into years


#include<stdio.h>
int main()
{
    int year,day;

    printf("enter number of year: ");
    scanf("%d",&year);

    day=year*365;
   

    printf("day=%d year=%d",year,day);
}

