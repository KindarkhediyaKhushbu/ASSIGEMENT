// WAP to reverse a string and check that the string is palindrome or not

#include<stdio.h>
#include<string.h>
int main()
{
    char Str[50];
    int i,len,flag=0;

    printf("\n Enter the string to check palindrom: ");
    gets(Str);
    len=strlen(Str);
    for (int i = 0; i < len; i++)
    {
        if (Str[i]!=Str[len-i-1])
        {
            flag=1;
            break;
        }
        
    }
    if (flag==0)
    {
        printf("string is palindrom..");
    }
    else
    {
        printf("string is not palindrom..");
    }
    
    
return 0;
}