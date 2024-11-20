//Convert country’s name in abbreviate form

#include<stdio.h>

void main()
{
    char country[20];

    printf(" Enter country :");
    scanf("%s",&country);

    printf("AbbreviatedName:");
    printf("%C%c",country[0],country[1]);
}