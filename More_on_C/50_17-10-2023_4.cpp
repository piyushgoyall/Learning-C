#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string name;
    string stu_id;
    int course;
    void Display()
    {
        cout << "Name: " << name << endl;
        cout << "Student ID: " << stu_id << endl;
        cout << "Course: " << course << endl;
    }
};
int main()
{
    Student s1;
    s1.name = "Deepak";
    s1.stu_id = "CU001";
    s1.course = 19;
    cout << "First Student: " << endl;
    s1.Display();

    Student s2;
    s2.name = "Gopal";
    s2.stu_id = "CU002";
    s2.course = 20;
    cout << endl
         << "Second Student: " << endl;
    s2.Display();
    return 0;
}