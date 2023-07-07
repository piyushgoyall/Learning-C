// pointer structure

#include <stdio.h>
#include <string.h>
struct student
{
    int id;
    char name[20];
    float marks;
};

struct student s1 = {1, "ABC"};

int main()
{
    struct student *ptr = &s1;
    printf("Roll number of %s is: %d\n", ptr->name, ptr->id);
    return 0;
}
