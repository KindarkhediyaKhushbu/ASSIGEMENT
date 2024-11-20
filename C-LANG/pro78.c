// //Patterns:
// 1
// 1 0
// 1 0 1
// 1 0 1 0
// 1 0 1 0 1

#include<stdio.h>
int main()
{
// printf(" ....patten 1 ....\n");
//   int i, j;

//     for(i=0;i<=4;i++)
//     {
//         for(j=0;j<=i;j++)
//         {
//             printf("%d", (j+1)%2);
//         }
//         printf("\n");
//     }


//  A 
//  B C 
//  D E F 
//  G H I J 
//  K L M N O    

    // printf(" ....patten 2:....\n");
    //  int counter = 65; // 97 for small

    // for (int i = 0; i < 5; i++)
    // {
    //     for (int j = 0; j <= i; j++)
    //     {
    //         printf("%c ", counter);
    //         counter++;
    //     }
    //     printf("\n");
    // }



//         *
//       * * *
//    * * * * * * 
//   * * * * * * *
// * * * * * * * * *

    // printf(" ....patten 3 ....\n");
    //  int counter = 1;
    // for (int i = 1; i <= 10; i += 2)
    // {
    //     // printf("\n %d", i);
    //     for (int k = 4; k > (i / 2) + 0.5; k--)
    //     {
    //         printf(" ");
    //     }

    //     for (int j = 0; j < i; j++)
    //     {
    //         printf("*");
    //     }
    //     printf("\n");
    //     counter++;
    // }



// 1
// 2 3
// 4 5 6
// 7 8 9 10
// 11 12 13 14 15

// printf(" ....patten 4 ....\n");
//  int num = 1;

//     for (int i = 0; i < 5; i++)
//     {
//         for (int j = 0; j <= i; j++)
//         {
//             printf("%d ", num);
//             num++;
//         }
//         printf("\n");
//     }


// A 
// A B 
// A B C 
// A B C D 
// A B C D E

// printf(" ....patten 5....\n");
//   int  k=65; // 97 for small

//     for (int i = 0; i < 5; i++)
//     {
//         for (int j = 0; j <= i; j++)
//         {
//             printf("%c ",k+j);
//         }
//         printf("\n");
//     }


// * 
// * * 
// * * * 
// * * * * 
// * * * * * 
// * * * * * * 
// * * * * *
// * * * *
// * * *
// * *
// *
printf(" ....patten 6 ....\n");

 for (int  i = 1; i <= 6 ; i++)
        {
            int j = 0;
                while (j<i)
                {
                    printf("* ");
                    j++;
                }
                printf("\n");
            
        }
        for (int i = 5; i > 0; i--)
        {
            for (int j = 0 ; j < i; j++)
            {
                printf("* ");
            }
            printf("\n");
        }

    return 0;
}