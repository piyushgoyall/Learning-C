// Structure

#include <stdio.h>
struct employee
{
    int id;
    char name;
    float marks;
};

// struct employee a;

int main()
{
    struct employee m = {3, 'B', 4.5};

    // struct employee m;
    // m.id = 12;
    // m.name = 'a';
    // m.marks = 2.4;

    printf("Marks: %f\n", m.marks);
    return 0;
}
