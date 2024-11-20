//(1)+ (1+2) + (1+2+3) + (1+2+3+4) + ... + (1+2+3+4+...+n)
#include<stdio.h>
int main()
{
    int n,totalsum=0;

    printf("Enter numbre: ");
    scanf("%d",&n);


    for (int i = 1; i <= n; i++)
    {
        int sum=0;
        for (int j = 1; j <= i; j++)
        {
            sum+=j;
        }
        totalsum+=sum;
    }
    printf("the total sum is: %d \n",totalsum);
return 0;
}