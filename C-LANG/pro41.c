//WAP to accept the height of a person in centimeters and categorize the person according to their height

#include<stdio.h>
int main()
{
     float height;

     printf("enter the height in centimeters ");
     scanf("%f",&height);

     if(height<140)
     {
        printf("you have sort categorize \n ");
     }
     else if(height>=140&&height<180)
     {
        printf("you have average catagorize\n ");
     }     
     else
     {
        printf("you have tall catagorize\n ");    
     }
return 0;
}