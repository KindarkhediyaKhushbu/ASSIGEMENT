//WAP to find reverse of string using recursion

#include<stdio.h>
#include<string.h>

void reversestring(char str[], int index,int length)
{
    if (index==length)
    {
        return;
    }

    reversestring(str,index+1,length);
    putchar(str[index]);
}
    
int main()
{
    char str[100];

    printf("Enter a string: ");
    fgets(str,sizeof(str),stdin);


    str[strcspn(str, "\n")]='\0';

    printf("Reversed string: ");
    reverseString(str, 0, strlen(str));
    printf("\n");

return 0;
}