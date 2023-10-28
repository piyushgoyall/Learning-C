// RETURNING OBJECTS

#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    double marks, average;
};
Student calculateAverage(Student stud1, Student stud2)
{
    Student result;
    result.average = (stud1.marks + stud2.marks) / 2;
    return result;
}
int main()
{
    Student st1, st2, avg;
    st1.marks = 98.2;
    st2.marks = 82;
    avg = calculateAverage(st1, st2);
    cout << "Average: " << avg.average;
    return 0;
}