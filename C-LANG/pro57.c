//Accept the input month number and print number of days in that month.
#include<stdio.h>
int main()
{
    int month;

    printf("enter month number: ");
    scanf("%d",&month);

    switch(month)
    {
        case 1:
            printf("januaray 31 days:\n ");
            break;
        case 2 :
            printf("february (28-29) day: \n");
            break;
        case 3 :
            printf("march 31 day: \n");
            break;
        case 4 :
            printf("apirl 30 day: \n");
            break;
        case 5 :
            printf("may 31 day: \n");
            break;
        case 6 :
            printf("june 30 day: \n");
            break;
        case 7 :
            printf("july 31 day: \n");
            break;
        case 8 :
            printf("august 31 day: \n");
            break;
        case 9 :
            printf("september 30 day: \n");
            break;
        case 10 :
            printf("octomber 31 day: \n");
            break;
        case 11 :
            printf("november 30 day: \n");
            break;
        case 12 :
            printf("dectember 31 day: \n");
            break;

        default :
            printf("please enter vailed number(1-12): ");
            break;
    }
return 0;
}