//Write a program in C to read any Month Number in integer and display the number of days for this month.

#include<stdio.h>
int main()
{
   int month;

   printf("enter month number(1-12) : ");
   scanf("%d",&month);

    switch(month)
    {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            printf("31 day: \n");
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            printf("30 day\n");
            break;
        case 2:
             printf("28 / 29 day(depeding on leap year \n");
            break;
    default:
        printf("inviled number ! please vailed month munber: ");
        break;
    }
   

   
return 0;
}