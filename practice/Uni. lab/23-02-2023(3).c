// Natural number series.

#include<stdio.h>
int print(int num=1)
{
    if(num<=50)
    {
        printf("%d\t",num);
        print(num+1);
    }
}

int main()
{
    print();
}
