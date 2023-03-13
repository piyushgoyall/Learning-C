// Void pointer

#include <stdio.h>
int main()
{
    int a = 2;
    char b = 'A';
    float f = 3.5f;
    void *ptr;
    ptr = &a;
    printf("Typecasting a = %d\n", *(int *)ptr);
    ptr = &b;
    printf("Typecasting b = %c\n", *(char *)ptr);
    ptr = &f;
    printf("Typecasting f = %f", *(float *)ptr);
    return 0;
}