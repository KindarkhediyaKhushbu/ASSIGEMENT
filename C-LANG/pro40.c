//Accept marks from user and check pass or fail

#include<stdio.h>
int main()
{
    float marks;

    printf("enter the marks: ");
    scanf("%f",&marks);
    if(marks>=40)
    {
        printf("you have pass\n");
    }
    else
    {
        printf("you have fail \n");       
    }

return 0;
}