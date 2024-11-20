//Write a C program to check whether a triangle can be formed with the given values for the angles

#include<stdio.h>
int main()
{
    int angles1,angles2,angles3;

    printf("enter the angles: ");
    scanf("%d%d%d",&angles1,&angles2,&angles3);

    if(angles1==angles2 && angles2==angles3)
    {
        printf(" he Given Triangle is equilateral: \n");
    }
    else if(angles1==angles2 || angles2==angles2 || angles3==angles1)
    {
        printf("The given Triangle is isosceles");
    }
    else
    {
        printf("The given Triangle is scalene");
    }
return 0;
}