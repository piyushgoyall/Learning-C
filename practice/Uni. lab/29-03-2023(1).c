// palindrome series

#include <stdio.h>
int main()
{
    int n, n1;
    printf("Enter starting and ending value : ");
    scanf("%d %d", &n1, &n);
    int nu, rem, sum;
    printf("Palindrome numbers between %d and %d are :", n1, n);
    for (int i = n1; i <= n; i++)
    {
        nu = i;
        sum = 0;
        while (nu > 0)
        {
            rem = nu % 10;
            sum = sum * 10 + rem;
            nu = nu / 10;
        }
        if (sum == i)
        {
            printf("%d  ", sum);
        }
        else
        {
            continue;
        }
    }
    return 0;
}