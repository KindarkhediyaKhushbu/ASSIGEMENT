//(1*1) + (2*2) + (3*3) + (4*4) + (5*5) + ... + (n*n)
#include<stdio.h>
int main()
{
    int n;
    int sum=0;

    printf("Enter a positive number: ");
    scanf("%d",&n);

    for(int i=0; i<=n; i++)
    {
        sum+=i*i;
    }
    printf("the sum of squares is: %d\n",sum);
return 0;
}