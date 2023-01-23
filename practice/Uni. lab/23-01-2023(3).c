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
            printf("The value is 1\n");
            break;
        case 2:
            printf("The value is 2\n");
            break;
        case 3:
            printf("The value is 3\n");
            break;
        default:
            printf("Try again\n");
            break;
    }
    return 0;
}