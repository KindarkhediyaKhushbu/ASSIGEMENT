//WAP to print table up to given numbers(gadhiyo)
#include<stdio.h>
int main()
{
    int n;
     printf("enter number: ");
     scanf("%d",&n);

    for(int j=1; j<=10; j++)
    {
        printf("\n%d * %d = %d",n,j,n*j);
    }
return 0;
}