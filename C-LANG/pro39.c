//Find the Character Is Vowel or Not

#include<stdio.h>
int main()
{
     char test;
    printf("Enter character is  : ");
    scanf("%c",&test);
    
    if((test=='a')||(test=='e')||(test=='i')||(test=='o')||(test=='u'))
    {
        printf("\nCHARACTER IS VOWEL: ");
    }
    else
    {
        printf("\nCHARACTER IS CONSONANT: ");
    }
    
return 0;
}