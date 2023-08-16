#include <stdio.h>
#include <string.h>
struct name
{
    char fn[20];
    char ln[20];
};
struct st
{
    int roll;
    struct name n1;
} s1, s2, s3;
int main()
{
    printf("Enter name of student: \n");
    scanf("%s", &s1.n1.fn);
    printf("Enter roll numberL: \n");
    scanf("%d", &s1.roll);
    printf("Roll number of %s is %d", s1.n1.fn, s1.roll);
    return 0;
}