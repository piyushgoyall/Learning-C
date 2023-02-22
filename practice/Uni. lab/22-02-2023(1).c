// Even or Odd using function.

// #include<stdio.h>
// int eoo(int *num)
// {
//     *num%2==0?printf("Even"):printf("Odd");
// }
// int main()
// {
//     int num;
//     scanf("%d",&num);
//     eoo(&num);
//     return 0;
// }

#include<stdio.h>

int eoo(int num);
int main()
{
    int num;
    scanf("%d",&num);
    eoo(num);
    return 0;
}

int eoo(int num)
{
    return(num%2==0?printf("Even"):printf("Odd"));
}