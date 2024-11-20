//WAP of Addition, Subtraction, Multiplication and Division using Switch case.(Must Be Menu Driven)
#include<stdio.h>
int main()
{
    int choice;
    float num1,num2,result;
    do
    {
        // printf("\n menu:");
         printf("1. Addition: \n");
        printf("2. Subtraction: \n");
        printf("3. Multiplication: \n");
        printf("4. Division:\n");
        printf("5. exit: \n");

        printf("Enter youe choice: ");
        scanf("%d",&choice);

        switch (choice)
        {
        case 1:
            printf("Enter two number: ");
            scanf("%f %f", &num1, &num2);
            result = num1 + num2;
            printf("Result: %.2f \n ",result);
            break;
        case 2:
            printf("Enter two number: ");
            scanf("%f %f",&num1,&num2);
            result=num1-num2;
            printf("Result: %.2f\n",result);
            break;
        case 3:
            printf("Enter two number: ");
            scanf("%f %f",&num1,&num2);
            result=num1*num2;
            printf("Result: %.2f\n",result);
            break;
        case 4:
            printf("Enter two number: ");
            scanf("%f %f",&num1,&num2);
            result = num1 / num2;
            printf("Result: %.2f\n", result);
        
            break;  
        case 5:
            printf("Exiting the program:\n");
            break;
        default:
            printf("inviled chice! try again:");
            break;
        }

    }
    while(choice!=5);

    
return 0;
}