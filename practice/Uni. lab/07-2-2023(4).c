// reverse numebr 

#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number : ");
    scanf("%d",&num);
    printf("Last digit : %d",num%10);
    int rem,rev=0;
    while(num>0)
    {
        rem = num%10;
        rev = rev*10 + rem;
        num = num/10;
    }
    printf("\nFirst digit : %d",rev%10);
    return 0;
}

// #include<stdio.h>
// int main()
// {
//     int num;
//     printf("Enter a number : ");
//     scanf("%d",&num);
//     int rem,rev=0;
//     for(int i=num;i>0;i=i/10)
//     {
//         rem = i%10;
//         rev = rev*10+rem;
//     }
//     printf("Reverse : %d",rev);
//     return 0;
// }

// #include<stdio.h>
// int main()
// {
//     int num;
//     printf("Enter a number : ");
//     scanf("%d",&num);
//     int rem,rev=0;
//     while(num>0)
//     {
//         rem = num%10;
//         rev = rev*10 + rem;
//         num = num/10;
//     }
//     printf("Reverse : %d",rev);
//     return 0;
// }