// Write a Program to find the greatest among three numbers using:
// a) Conditional Operator
// b) If-Else statement

#include<stdio.h>
int main()
{
    int n1,n2,n3;
    printf("Enter three numbers : ");
    scanf("%d %d %d",&n1,&n2,&n3);
    int result = (n1>n2)?(n1>n3?n1:n3):(n2>n3?n2:n3);
    printf("Largest number : %d",result);
}

// #include<stdio.h>
// int main()
// {
//     int n1,n2,n3;
//     printf("Enter three numbers : ");
//     scanf("%d %d %d",&n1,&n2,&n3);
//     if(n1>n2)
//     {
//         if(n1>n3)
//         {
//             printf("Largest number : %d",n1);
//         }
//         else
//         {
//             printf("Largest number : %d",n3);
//         }
//     }
//     else if(n2>n1)
//     {
//         if(n2>n3)
//         {
//             printf("Largest number : %d",n2);
//         }
//         else
//         {
//             printf("Largest number : %d",n3);
//         }
//     }
// }