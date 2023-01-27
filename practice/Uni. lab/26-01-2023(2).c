// Write a program to print the following patterns:

//           *
//         * *
//       * * *
//     * * * *
//   * * * * *
// * * * * * *

#include<stdio.h>
int main()
{
    int num;
    printf("Enter numebr of rows : ");
    scanf("%d",&num);
    for(int row=0;row<num;row++)
    {
        for(int col=0;col<num;col++)
        {
            if(col>=num-row-1)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
}