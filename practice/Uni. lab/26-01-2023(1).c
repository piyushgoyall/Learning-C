// Write a program to print the following patterns:

// *
// * *
// * * *
// * * * *
// * * * * *
// * * * * * *

#include<stdio.h>
int main()
{
    int n,row,col;
    printf("Enter number of rows : ");
    scanf("%d",&n);
    for(row=0;row<n;row++)
    {
        for(col=0;col<=row;col++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}