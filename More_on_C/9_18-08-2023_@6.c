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
// new function to input the name and roll number
void input(struct student *s1)
{
    printf("Enter roll number and name of student: ");
    scanf("%d %s",&s1->roll,&s1->name);
}
int main()
{
    struct student s1;
    int num;
    printf("Enter number of students: ");
    scanf("%d",&num);
    for(int i=0;i<num;i++)
    {
        input(&s1);
        display(s1);
    }    
    return 0;
}
