// nested structure

#include <stdio.h>
#include <string.h>
struct dob
{
    int day;
    char month[20];
    int year;
};
struct stu
{
    int roll;
    char name[20];
    int marks;
    struct dob d1;
};
int main()
{
    struct stu s1;
    printf("enter the name of student: ");
    scanf("%s", &s1.name);
    printf("Roll number: ");
    scanf("%d", &s1.roll);
    printf("Enter marks: ");
    scanf("%d", &s1.marks);
    printf("Enter dob: ");
    scanf("%d %s %d", &s1.d1.day, &s1.d1.month, &s1.d1.year);
    printf("DOB of %s having roll number %d is: %d/%s/%d", s1.name, s1.roll, s1.d1.day, s1.d1.month, s1.d1.year);
    return 0;
}