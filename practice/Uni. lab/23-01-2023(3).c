// switch case.

#include <stdio.h>
int main()
{
    int a;
    printf("Enter the value of a : ");
    scanf("%d", &a);
    switch (a)
    {
        case 1:
            printf("The value is 1");
            break;
        case 2:
            printf("The value is 2");
            break;
        case 3:
            printf("The value is 3");
            break;
        default:
            printf("Try again");
            break;
    }
    return 0;
}