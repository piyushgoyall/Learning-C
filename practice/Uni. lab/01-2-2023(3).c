#include<stdio.h>
int main()
{
    int n;
    printf("Enter ending value : ");
    scanf("%d",&n);
    int j = 1;
    while(j+=2,j<=n)
    {
        printf("%d  ",j);
    }
    printf("%d",j);
}

