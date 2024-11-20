//Write a program to find out the max from given number (E.g., No: -1562 Max number is 6)
#include<stdio.h>
int main()
{
    int number,digit,mixdigit=0;

    printf("enter number: ");
    scanf("%d",&number);

    while (number!=0)
    { 
        digit=number%10;
        if(digit>mixdigit)
        {
            mixdigit=digit;
        }
        
            number/=10;
    }
    printf("max number : %d",mixdigit);
    
return 0;
}