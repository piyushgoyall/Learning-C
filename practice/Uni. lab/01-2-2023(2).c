// natural numbers till n(input integer) using while loop.

#include<stdio.h>
int main()
{
    int n,i=1;
    printf("Enter a number : ");
    scanf("%d",&n);
    while(i<=n)
    {
        printf("%d\n",i);
        i++;
    }
}

// #include<stdio.h>
// int main()
// {10
//     int n;
//     printf("Enter a number : ");
//     scanf("%d",&n);
//     while(n>0)
//     {
//         printf("%d\n",n);
//         n--;
//     }
// }