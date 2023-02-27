// C Program to print occurrence of a particular digit in a number.

#include <stdio.h>
int occur(int num, int digit)
{
    int rem, count = 0;
    while (num > 0)
    {
        rem = num % 10;
        if (rem == digit)
        {
            count += 1;
        }
        num = num / 10;
    }
    return count;
}
int main()
{
    int num, digit;
    printf("Enter a number : ");
    scanf("%d", &num);
    printf("Enter the digit whose occurence you want to check : ");
    scanf("%d", &digit);
    printf("Total occurrences : %d", occur(num, digit));
    return 0;
}