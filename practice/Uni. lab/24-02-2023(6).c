// Write the program to print the following pattern:
// // 1 2 3 4 5 6
// // 2 4 6 8 10 12
// // 3 6 9 12 15 18
// // 4 8 12 16 20 24
// // 5 10 15 20 25 30
// // 6 12 18 24 30 36

#include<stdio.h>
int main()
{
    int r;
    printf("Enter a number : ");
    scanf("%d",&r);
    for(int i=1;i<=r;i++)
    {
        int temp=i;
        for(int j=1;j<=r;j++)
        {
            printf("%d  ",temp);
            temp=temp+i;
        }
        printf("\n");
    }
    return 0;
}