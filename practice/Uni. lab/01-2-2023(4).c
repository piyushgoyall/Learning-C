// odd & even series using while loop.

#include<stdio.h>
int main()
{
    int n;
    printf("Enter ending value : ");
    scanf("%d",&n);
    int i =0;
    while(i<=n)
    {
        printf("%d  ",i);
        i = i+2;
    }
}


// #include<stdio.h>
// int main()
// {
//     int n;
//     printf("Enter ending value : ");
//     scanf("%d",&n);
//     int i =1;
//     while(i<=n)
//     {
//         printf("%d  ",i);
//         i = i+2;
//     }
// }