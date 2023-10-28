#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    double marks;
    Student(double m)
    {
        marks = m;
    }
};
void calculateAverage(Student stud1, Student stud2)
{
    double average = (stud1.marks + stud2.marks) / 2;
    cout << "Average Marks = " << average << endl;
}
int main()
{
    Student st1(73.8), st2(83);
    calculateAverage(st1, st2);
    return 0;
}