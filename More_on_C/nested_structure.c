#include <stdio.h>
#include <string.h>

struct dob
{
    int day;
    int month;
    int year;
};

struct student
{
    int id;
    char name[20];
    struct dob d1;
};

int main()
{
    struct student s1;
    printf("Enter DOB: \n");
    scanf("%d%d%d", &s1.d1.day, &s1.d1.month, &s1.d1.year);
    printf("DOB is: %d-%d-%d", s1.d1.day, s1.d1.month, s1.d1.year);
    return 0;
}
