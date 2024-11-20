//Accept 5 expense from user and find average of expense
#include<stdio.h>
void main()
{
    float expense[5];
    float total=0.00;
    float average;

    for(int i=0;i<5;i++)
    {
        printf("enter expense %d :",i+1);
        scanf("%f",&expense[i]);
        total+=expense[i];

    }
    average=total/5;

     printf("\ntotal expense: %.2f",total);
    printf(" \naverage expense:%.2f",average);

}