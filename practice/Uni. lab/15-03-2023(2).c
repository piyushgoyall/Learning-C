// Input from user to array using loop.

#include<stdio.h>
int main()
{
    int arr[5];
    for(int i=0;i<5;i++)
    {
        printf("Enter element number arr[%d] : ",i);
        scanf("%d",&arr[i]);
    }   
    printf("\nElement 2 : %d",arr[1]);
    printf("\nElement 4 : %d",arr[3]);
    return 0;
}

