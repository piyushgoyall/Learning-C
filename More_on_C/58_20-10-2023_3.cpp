// Q1) Write a program to print the names of students by creating a Student class. If no name is passed while creating an object of the Student class,
// then the name should be "Unknown", otherwise the name should be equal to the string value passed while creating the object of the Student class.

#include <bits/stdc++.h>
using namespace std;

class Student
{
private:
    string name;

public:
    Student(string studentName = "Unknown")
    {
        name = studentName;
    }

    string getName()
    {
        return name;
    }
};

int main()
{
    Student student1;
    Student student2("Alice");
    Student student3("Bob");

    cout << "Student 1: " << student1.getName() << endl;
    cout << "Student 2: " << student2.getName() << endl;
    cout << "Student 3: " << student3.getName() << endl;

    return 0;
}
