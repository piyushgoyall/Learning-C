#include <stdio.h>
#include <string.h>
struct student
{
    int id;
    float marks;
    char favchar;
    char name[30];
};

int main()
{
    struct student harry, ravi, shubhangi;
    harry.id = 1;
    ravi.id = 2;
    shubhangi.id = 3;
    strcpy(shubhangi.name, "Shubhangi Bhatt");

    harry.marks = 10.4;
    ravi.marks = 20.4;
    shubhangi.marks = 30.4;

    harry.favchar = 'A';
    ravi.favchar = 'B';
    shubhangi.favchar = 'C';

    printf("Shubhangi has got %f marks\n", shubhangi.marks);
    printf("Shubhangi's full name is: %s", shubhangi.name);
    return 0;
}
