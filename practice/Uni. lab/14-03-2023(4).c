#include<stdio.h>
int main()
{
    int i=3,*j,**k;
    j=&i;
    k=&j;
    printf("%d %d %d",*j,**k,*(*k));   
    return 0;
}

// #include<stdio.h>
// int main()
// {
//     int i=10;
//     void *p=&i;
//     printf("%d\n",(int *)p);   
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     char *p;
//     p = "Hello";
//     printf("%c",*&*p);
//     return 0;
// }