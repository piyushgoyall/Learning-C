// Write a program to swap two variable:
// a) By using temporary variable.
// b) Without using temporary variable

#include<stdio.h>
int main()
{
    int num1,num2;
    printf("Enter two numbers : ");
    scanf("%d %d",&num1,&num2);
    printf("Numbers before swapping : %d  %d",num1,num2);
    int temp;
    temp = num1;
    num1 = num2;
    num2 = temp;
    printf("\nNumbers after swapping : %d  %d",num1,num2);
    return 0;
}



// #include<stdio.h>
// int main()
// {
//     int num1,num2;
//     printf("Enter two numbers : ");
//     scanf("%d %d",&num1,&num2);
//     printf("Numbers before swapping : %d  %d",num1,num2);
//     num1 = num1+num2;
//     num2 = num1-num2;
//     num1 = num1-num2;
//     printf("\nNumbers after swapping : %d  %d",num1,num2);
//     return 0;
// }