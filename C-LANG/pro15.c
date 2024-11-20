//Convert school’s name in abbreviated form 

#include<stdio.h>

void main()
{
    char schoolname[20];

    printf(" Enter schoolname :");
    scanf("%s",&schoolname);

    printf("AbbreviatedName:");
    printf("%C%c%c",schoolname[0],schoolname[1],schoolname[2]);
}
