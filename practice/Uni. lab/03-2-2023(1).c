// Input name and roll number of a student.
// Input marks of 5 subjects, calculate average and percentage.
// Display grade according to conditions : percentage < 40 : "Fail", percentage 40-60 : "Grade E", percentage 60-70 : "Grade D",
// percentage 70-80 : "Grade C", percentage 80-90 : "Grade B",percentage >= 90 : "Grade A".

#include <stdio.h>
#include <string.h>
int main()
{
    char name[100];
    printf("Enter the name of student : ");
    gets(name);
    int r_n;
    printf("Enter the roll number : ");
    scanf("%d", &r_n);
    int marks[5];
    for (int i = 0; i < 5; i++)
    {
        printf("Enter marks in subject %d : ", (i + 1));
        scanf("%d", &marks[i]);
    }
    int sum = 0;
    for (int i = 0; i < 5; i++)
    {
        if (marks[i] >= 0)
        {
            sum = sum + marks[i];
        }
        else
        {
            printf("Invalid input\n");
            return 0;
        }
    }
    int avg = sum / 5;
    printf("Average marks : %d", avg);
    printf("\nPercentage : %d", avg);
    printf("\n");
    if (avg < 40)
    {
        printf("Fail");
    }
    else if (avg >= 40 && avg < 60)
    {
        printf("Grade : E");
    }
    else if (avg >= 60 && avg < 70)
    {
        printf("Grade : D");
    }
    else if (avg >= 70 && avg < 80)
    {
        printf("Grade : C");
    }
    else if (avg >= 80 && avg < 90)
    {
        printf("Grade : B");
    }
    else if (avg >= 90 && avg <= 100)
    {
        printf("Grade : A");
    }
}