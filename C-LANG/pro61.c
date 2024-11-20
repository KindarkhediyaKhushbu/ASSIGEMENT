//WAP to accept 5 numbers from user and display all numbers
#include<stdio.h>
int main()
{
    int n[5];
    for(int i=0;i<=4;i++)
    {
        printf(" enter number is :");
        scanf(" %d",&n[i]);
    }   
    for(int i=0;i<=4;i++)
    {
        printf("\n%d",n[i]);
    }   
return 0;
}