//Series Program:

// 1 + 2 + 3 + 4 + 5 + ... + n

#include<stdio.h>
int main()
{
    int n,sum;
    printf("Enter number: ");
    scanf("%d",&n);

    sum=0;
    // printf("%d",sum);
    for (int i = 1; i <= n; i++)
    {
        printf("%d+",i);
        sum+=i;
    }
    printf("=%d",sum);

    
   return 0;
}