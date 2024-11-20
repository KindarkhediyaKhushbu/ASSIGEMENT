//WAP to make simple calculator (operation include Addition, Subtraction, Multiplication, Division, modulo) using conditional statement

#include<stdio.h>
int main()
{
    int nm1,nm2,d;
    printf("Enter number 1:");
    scanf("%d",&nm1);
    printf("Enter number 2:");
    scanf("%d",&nm2);
    
    printf("Enter numbe(1=+,2=-,3=%%,4=/,5=*) = :");
    scanf(" %d",&d);
    
    if(d==1)
    {
        printf("sum is %d",nm1+nm2);
    }
    else if(d==2)
    {
        printf("subtrastion is %d",nm1-nm2);
    }
    else if(d==3)
    {
        printf("modulo is %d",nm1%nm2);
    }
    else if(d==4)
    {
        printf("division is %d",nm1/nm2);
    }
    else if(d==5)
    {
        printf("multiplication is %d",nm1*nm2);
    }
    else
    {
        printf(" invaild input:");
    }
return 0;
}