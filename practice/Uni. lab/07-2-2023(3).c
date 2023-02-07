// predict the output

#include<stdio.h>
int main()
{
    int x=10,y=3,z;
    for(z=0;z<x;)
    {
        z = z++ + y;
        printf("%d\n",z);
    }
    return 0;
}