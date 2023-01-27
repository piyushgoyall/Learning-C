// Write the program to print the following pattern:

// 1 2 3 4 5 6
// 2 4 6 8 10 12
// 3 6 9 12 15 18
// 4 8 12 16 20 24
// 5 10 15 20 25 30
// 6 12 18 24 30 36

#include<stdio.h>
int main()
{
    int num;
    printf("Enter the number of rows : ");
    scanf("%d",&num);
    
    int row,col,temp;
    for(row=1;row<=num;row++)
    {
        temp = row;
        for(col=1;col<=num;col++)
        {
            printf("%d ",temp);
            temp = temp+row;
        }
        printf("\n");
    }
}


// **** OUTPUT ****

// Enter the number of rows : 6
// 1 2 3 4 5 6
// 2 4 6 8 10 12
// 3 6 9 12 15 18
// 4 8 12 16 20 24
// 5 10 15 20 25 30
// 6 12 18 24 30 36