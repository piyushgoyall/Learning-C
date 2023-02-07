// goto

#include<stdio.h>
int main()
{
    int i=1;
    repeat:
        printf("%d\n",i);
        i++;

        if(i<=10)
        {
            goto repeat;
        }
    return 0;
}