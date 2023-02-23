// fibonacci series with and without recursion.

#include <stdio.h>
int fibo(int i)
{
    if (i == 0 || i == 1)
        return i;
    else
        return fibo(i - 1) + fibo(i - 2);
}
int main()
{
    int i, n;
    printf("Enter a digit for fibonacci series: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        printf(" %d ", fibo(i));
    return 0;
}

// #include<stdio.h>
// int main()
// {
//     int term;
//     printf("Enter value : ");
//     scanf("%d",&term);
//     int a=0,b=1;
//     int sum=0;
//     printf("%d  %d  ",a,b);
//     for(int i=0;i<term-2;i++)
//     {
//         sum = a+b;
//         printf("%d  ",sum);
//         a=b;
//         b=sum;
//     }
//     return 0;
// }
