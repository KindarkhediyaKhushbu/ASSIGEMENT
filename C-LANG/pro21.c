// Accept 2 numbers from user and swap 2 numbers with using 3rd variable and without using 3rd variable
#include<stdio.h>

int main()
{
    int a=10,b=20,swap;
    printf("before swap a=%d b=%d",a,b);
    swap = a;
    a=b;
    b=swap;


    printf("\n after swap a=%d b=%d",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("\n after swap  without 3rd veriable a=%d b=%d",a,b);
}