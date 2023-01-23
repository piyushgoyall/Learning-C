// Nested if

#include<stdio.h>
int main()
{
    int i;
    printf("enter the value of i : ");
    scanf("%d",&i);
    if(i==100)
    {
        if(i<150)
        {
            printf("i is smaller than 150");
        }
        if(i<120)
        {
            printf("i is smaller than 120");
        }
    }
    else
    {
        printf("i is greater than 150");
    }
    return 0;
}