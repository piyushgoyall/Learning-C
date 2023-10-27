#include <stdio.h>
#include <string.h>
struct student
{
    int roll;
    char name[20];
}s2;
void display(struct student s2)
{
    printf("Name of setudent is: %s\n",s2.name);
    printf("Roll number of the student is: %d\n",s2.roll);
}
int main()
{
    struct student s1;
    printf("Enter roll number and name of student: ");
    scanf("%d %s",&s1.roll,&s1.name);
    display(s1);
    return 0;
}