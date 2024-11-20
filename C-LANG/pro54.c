// Write a C program to input basic salary of an employee and calculate its Gross salary according to following:
// Basic Salary <= 10000 : HRA = 20%, DA = 80%
// Basic Salary <= 20000 : HRA = 25%, DA = 90%
// Basic Salary > 20000 : HRA = 30%, DA = 95%\

#include<stdio.h>
int main()
{
     float bs,hr,da,gs;
     printf("enter the basic salary in employee: ");
     scanf("%f",&bs);

     if(bs<=10000)
     {
        hr=0.20*bs; //20%hra
        da=0.80*bs; //80%da
     }
     else if(bs<=20000)
     {
        hr=0.25*bs; //25%hra
        da=0.90*bs; //90&da
     }
     else
     {
        hr=0.30*bs;  //30%hrs
        da=0.95*bs; //95%da
     }
     
     gs=bs+hr+da;

    printf("Basic Salary: %.2f\n",bs);
     printf("hrs salary: %.2f\n",hr);
     printf("da salary:%.2f\n",da);
     printf("gross salary: %.2f",gs);
     
return 0;
}