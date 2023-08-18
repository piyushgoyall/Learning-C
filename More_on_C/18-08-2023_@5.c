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
    input(&s1);
    display(s1);
    return 0;
}

// #include<stdio.h>
// #include<string.h>

// struct student
// {
//     int roll;
//     char name[20];
// }s1;

// struct student getDetails(){
//     struct student s1;
//     printf("Enter Roll number and Name of Student \n");
//     scanf("%d %s", &s1.roll, &s1.name);
//     return s1;
// }

// void display(int a, char b[20]){
//     printf("Name of Student is : %s\n",b);
//     printf("Roll no. of student is : %d\n",a);
// }

// int main(){
//     struct student s2 = getDetails();
//     display(s2.roll, s2.name);
//     return 0;
// }