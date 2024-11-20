// Write a C program to determine eligibility for admission to a professional course based on the following criteria
// Eligibility Criteria : Marks in Maths >=65 and Marks in Phy >=55 and Marks in Chem>=50 and Total in all three subject >=190 or Total in Maths and Physics >=140 -------------------------------------- Input the marks obtained in Physics :65 Input the marks obtained in Chemistry :51 Input the marks obtained in Mathematics :72 Total marks of Maths, Physics and Chemistry : 188 Total marks of Maths and Physics : 137 The candidate is not eligible.

#include<stdio.h>
int main()
{
    int physics, chemistry, mathematics;
    int totalal,totalimp;

    printf("input mark obtained in physics: ");
    scanf("%d",&physics);

    printf("input the mark obtained in chemistry: ");
    scanf("%d",&chemistry);

    printf("input the mark obetained in mathematics: ");
    scanf("%d",&mathematics);

    totalal=physics+chemistry+mathematics;
    totalimp=physics+chemistry;

    if((mathematics>=65 && physics>=55 && chemistry>=50 && totalal>=190 ) ||(totalimp>=140))
    {
        printf("The candidate is eligible for admission.\n");
    }
    else
    {
        printf("the candidate is not eligible \n");
    }

return 0;
}