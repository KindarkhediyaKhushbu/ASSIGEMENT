//Calculate 5 numbers from user and calculate number of even and odd using of while loop
#include<stdio.h>
int main()
{
    int number[5];
    int count=0;
    int even_count=0,odd_count=0;

    printf("Enetr five number: ");
    while (count<5)
    {
        printf("\n number:",count+1);
        scanf("%d",&number[count]);
        if(number[count]%2==0)
        {
            even_count++;

        }
        else
        {
            odd_count++;
        }
        count++;    

    }
    printf("number is even: %d\n",even_count);
    printf("number is odd: %d \n",odd_count);
    

    
return 0;
}