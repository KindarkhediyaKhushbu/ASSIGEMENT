//Calculate sum of 10 numbers using of while loop
#include<stdio.h>
int main()
{
    int sum=0;
    int count=0;
    int number[10];


    printf("Enter 10 number: \n ");
    while (count<10)
    {
        printf("number: ",count+1);
        scanf("%d",&number[count]);
        sum+=number[count];
        count++;
    }
    printf("the sum of the entered number: %d\n",sum);

return 0;
}