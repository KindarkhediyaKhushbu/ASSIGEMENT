//Accept month number and display month name
#include<stdio.h>
int main()
{
    int month;
    printf("enter the month number(1-12): ");
    scanf("%d",&month);
    switch (month) 
    {
        case 1:
            printf("january \n");
            break;
        case 2:
            printf("february\n");
            break;
        case 3:
            printf("march\n");
            break;
        case 4:
            printf("apirl\n");
            break;
        case 5:
            printf("may\n");
            break;
        case 6:
            printf("june\n");
            break;
        case 7:
            printf("july \n");
            break;
        case 8:
            printf("The august\n");
            break;
        case 9:
            printf("Tseptember\n");
            break;
        case 10:
            printf("octomber\n");
            break;
        case 11:
            printf("november\n");
            break;
        case 12:
            printf("dectember\n");
            break;
        default:
            printf("Invalid month number! Please enter a value between 1 and 12.\n");
            break;
    }
return 0;
}