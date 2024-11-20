//

#include<stdio.h>

int main()
{
    float insurance,salary,loan;

    printf("enter your monthly salary: ");
    scanf("%f",&salary);
    insurance=salary*(10.00/100);
    printf("\n monthly salary is:%.2f",salary);
    salary-=insurance;

    printf("\nsalary after insurnce deducted :%.2f",salary);
    printf("\n amount of insurnce : %.2f",insurance);

     loan=salary*(10.00/100);
    salary-=loan;

    printf("\nsalary after loan deducted :%.2f",salary);
    printf("\n amount of loan : %.2f",loan);

    
     return 0;
}