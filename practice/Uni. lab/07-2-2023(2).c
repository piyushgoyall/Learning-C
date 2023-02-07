// goto

#include<stdio.h>
int main()
{
    int num;
    printf("Enter number : ");
    scanf("%d",&num);

    if (num<=0)
    {
        goto end;
    }
    printf("Number is : %d",num);

    end:
    {
        printf("\nBye Bye");
    }
    return 0;
}