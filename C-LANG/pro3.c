// WAP to Find Area And Circumference of Circle

#include<stdio.h>

int  main()
{
    int abc;
    float PI=3.14,area,circumference;

    printf("enter the abc of circle: ");
    scanf("%d",&abc);

    area=PI*abc*abc;
    printf("the area of circle is :%.2f",area);

    circumference=2*PI*abc;
    printf("\n the circumference cirlcle is:%.2f",circumference);



}