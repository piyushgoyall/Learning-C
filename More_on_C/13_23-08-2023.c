#include <stdio.h>
struct st
{
    char a;
    char b;
    int c : 2;
    char d;
};
// } __attribute__((packed));
struct st s1;
int main()
{
    printf("%lu", sizeof(s1));
    return 0;
}