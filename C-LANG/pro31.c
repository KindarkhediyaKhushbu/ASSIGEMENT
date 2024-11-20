//Convert kilometers into meters

#include<stdio.h>
int main()
{
   float kilometers,meter;

   printf("Enter distance in kilometers :");
   scanf("%f",&kilometers);

   meter=kilometers*100;

   printf("%0.3fkilometers = %0.3fmeter",kilometers,meter);

   return 0;
}





