//10.find the area of a rectangular prism formula : A=2(wl+hl+hw)

#include<stdio.h>

void main()
{
    
     float lenth, width, height, area;
    printf("Enter the lenth of rectangular: ");
    scanf("%f", &lenth);

    printf("Enter the width of rectangular: ");
    scanf("%f", &width);


    printf("Enter the height of rectangular: ");
    scanf("%f", &height);

    
   area=2*((width*lenth)+(lenth*height)+(height*width));
    printf("The area of rectangular is: %.2f\n", area);
}