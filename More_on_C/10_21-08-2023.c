// we can set bit using a:4

#include <stdio.h>
#include <string.h>
// #pragma pack(1)
struct A
{
    long long a;
    char b;
};
struct A1
{
    int a : 16;
    int b : 17;
} __attribute__((packed, aligned(2)));
struct B
{
    long long c;
    char d;
} __attribute__((packed));

struct C
{
    long long e;
    char f;
} __attribute__((packed, aligned(4)));
int main()
{
    struct A a;
    struct A1 a1;
    struct B b;
    struct C c;
    printf("%lu\n", sizeof(a));
    printf("%lu\n", sizeof(a1));
    printf("%lu\n", sizeof(b));
    printf("%lu\n", sizeof(c));
    return 0;
}