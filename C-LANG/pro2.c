// Write a program to make Simple calculator (to make addition, subtraction, multiplication, division and modulo)
#include<stdio.h>


void main()
{

   int a=10;
    int b=20;
    int res;
    
    res=a+b;
    printf("addition =%d\n",res);
    res=a-b;
    printf("subtraction =%d\n",res);
    res=a/b;
    printf("division =%d\n",res);
    res=a*b;
    printf("multiplication =%d\n",res);
    res=a%b;
    printf("modulo =%d\n",res);
}