// C Program to calculate SUM & PRODUCT of all digits

#include <stdio.h>
int pro(int num)
{
    int rem, pro = 1;
    while (num > 0)
    {
        rem = num % 10;
        pro = pro * rem;
        num = num / 10;
    }
    return pro;
}
int sum(int num)
{
    int rem, summ = 1;
    while (num > 0)
    {
        rem = num % 10;
        summ = summ + rem;
        num = num / 10;
    }
    return summ;
}
int main()
{
    int num;
    printf("Enter a number : ");
    scanf("%d", &num);
    printf("Sum = %d\nProduct = %d", sum(num), pro(num));
    return 0;
}