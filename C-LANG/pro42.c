//C Program to Check Uppercase or Lowercase or Digit or Special Character

#include<stdio.h>
int main()
{
    char ch;
    printf("enter the character : ");
    scanf("%c",&ch);

    if(ch>='A' && ch<='Z')
    {
        printf("%c is an uppercase\n ",ch);
    }
    else if(ch>='a' && ch<='z')
    {
        printf("%c is an lowercase: \n",ch);
    }
    else if(ch>='0' && ch<='9')
    {
        printf("%c is an digit: \n",ch);
    }
    else
    {
        printf("%c is a special character: \n",ch);
    }
return 0;
}