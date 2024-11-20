//WAP Find out length of string without using inbuilt function
#include<stdio.h>
#include<string.h>

int stringLength(const char *str)
{
    int length =0;
    while (str[length]!='\0')
    {
        length++;
    }
    return length;
    
}
int main()
{
    const char *myString="hellow world";
    int length=stringLength(myString);
    printf("lenth of the string is: %d\n",length);
return 0;
}