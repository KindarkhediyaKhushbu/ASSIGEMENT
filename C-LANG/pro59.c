// //WAP to show
// i. Monday to Sunday using switch case ii. Vowel or Consonant using switch case

#include<stdio.h>
int main()
{
    
    int week;
    char ch;

    printf("enter week number: ");
    scanf("%d",&week);
    

    switch(week)
    {
        case 1:
            printf("sunday\n");
            break;
        case 2:
            printf("monday\n");
            break;
        case 3:
            printf("tuesday\n");
            break;
        case 4:
            printf("wednesday\n");
            break;
        case 5:
            printf("thuesday\n");
            break;
        case 6:
            printf("firday\n");
            break;
        case 7:
            printf("saturday\n");
            break;
        default :
            printf("invalid input ! please enter vaild input (1-7): ");
            break;
    }

    printf("enter character: ");
    scanf(" %c",&ch);        
    
    switch(ch)
    {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
         printf("%c is a vowel. \n",ch);
         break;

        default :
            printf("%c is consonant:  ",ch);
            break;
    
    
    }
    
    
return 0;
}