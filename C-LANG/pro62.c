// WAP to take 10 no. Input from user find out below values
// a.
// How many Even numbers are there
// b.
// How many odd numbers are there
// c.
// Sum of even numbers
// d.
// Sum of odd numbers

#include<stdio.h>
int main()
{
    int number[10];
    int oddcount=0;
    int evencount=0;
    int oddsum=0;
    int evensum=0;

  
    for (int i=1; i<=10; i++)
    {
         printf("enter the number: ");
        scanf("%d",&number[i]);

        if(number[i] % 2==0)
        {
             evencount++;
            evensum+=number[i];
        }
        else
        {
           
             oddcount++;
            oddsum+=number[i];
        }
    }
    printf("number of odd number: %d \n",oddcount);
    printf("number of even number:%d\n",evencount);
    printf("number of sum odd number:%d\n",oddsum);
    printf("number of sum even number: %d\n",evensum);

return 0;
}