// 24.Accept 5 employees name and salary and count average and total salary

#include <stdio.h>
int main()
{
    float salary1, salary2, salary3, salary4, salary5, ave, total;
    char num1[20], num2[20], num3[20], num4[20], num5[20];

    printf("\n....enter 5 mployee salary....");
    printf("\nenter 1 employee name: ");
    scanf("%s", &num1);
    printf("enter salary:");
    scanf("%f", &salary1);

    printf("enter 2 employee name: ");
    scanf("%s", &num2);
    printf("enter salary:");
    scanf("%f", &salary2);

    printf("enter 3 employee name: ");
    scanf("%s", &num3);
    printf("enter salary:");
    scanf("%f", &salary3);

    printf("enter 4 employee name: ");
    scanf("%s", &num4);
    printf("enter salary:");
    scanf("%f", &salary4);

    printf("enter 5 employee name: ");
    scanf("%s", &num5);
    printf("enter salary:");
    scanf("%f", &salary5);

    total = salary1 + salary2 + salary3 + salary4 + salary5;
    ave = total / 5;

    printf("\navg salary: %.2f", ave);
    printf(" \ntotalsalary:%.2f", total);
    return 0;
}