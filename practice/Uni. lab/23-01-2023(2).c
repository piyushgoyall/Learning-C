// if,else if,else

#include <stdio.h>
int main()
{
    int i;
    printf("Enter the value of i : ");
    scanf("%d", &i);
    if (i == 100)
        printf("i is 100");
    else if (i == 150)
        printf("i is 150");
    else if (i == 200)
        printf("i is 200");
    else
        printf("i is not present");
}