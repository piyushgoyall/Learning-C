#include<stdio.h>
struct stu
{
    int roll:2;
    int marks:2;
    char a;
}s1;
int main()
{
    printf("%lu",sizeof(s1));
    return 0;
}

// // nested structure

// #include <stdio.h>
// #include <string.h>
// struct dob
// {
//     int day[3];
//     char month[20];
//     int year[3];
// };
// struct stu
// {
//     int roll[3];
//     char name[20];
//     int marks[3];
//     struct dob d1[3];
// };
// int main()
// {
//     struct stu s1[3];
//     for (int i = 0; i < 3; i++)
//     {
//         printf("enter the name of student: ");
//         scanf("%s", &s1[i].name);
//         printf("Roll number: ");
//         scanf("%d", &s1[i].roll);
//         printf("Enter marks: ");
//         scanf("%d", &s1[i].marks);
//         printf("Enter dob: ");
//         scanf("%d %s %d", &s1[i].d1[i].day, &s1[i].d1[i].month, &s1[i].d1[i].year);
//     }

//     for(int i=0;i<3;i++)
//     {
//         printf("DOB of %s having roll number %d is: %d/%s/%d", s1[i].name[i], s1[i].roll[i], s1[i].d1[i].day, s1[i].d1[i].month, s1[i].d1[i].year);
//     }
//     return 0;
// }