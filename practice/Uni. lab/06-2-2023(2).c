// static variable

#include<stdio.h>
int main()
{
    static int s=70;
    s++;
    printf("%d",s);
    return 0;
}

// for reference

// #include<stdio.h>
// int main()
// {
// 	static int a=10;
//     int *ptr;
// 	ptr=&a;
// 	printf("Address : %d\n",ptr);
// 	printf("%d\n",*ptr);
//     a++;
//     printf("Address : %d\n",ptr);
// 	printf("%d",*ptr);
// }