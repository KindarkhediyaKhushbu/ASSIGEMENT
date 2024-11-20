//WAP to input the week number and print week day.
#include<stdio.h>
int main()
{
    int week;

    printf("enter week munber 1-7: ");
    scanf("%d",&week);;


    switch(week)
    {
        case 1:
            printf("sunday\n");
            break;
        case 2:
            printf("monday\n");
            break;
        case 3:
            printf("tuesday\n");
            break;
        case 4:
            printf("wednesday\n");
            break;
        case 5:
            printf("thuesday\n");
            break;
        case 6:
            printf("firday\n");
            break;
        case 7:
            printf("saturday\n");
            break;
        
        default :
            printf("invelid number! please enter the velid (1-7)number: ");
    }
            
return 0;
}