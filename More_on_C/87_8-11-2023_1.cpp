// Private Constructor Using Pointers

#include <bits/stdc++.h>
using namespace std;

class Employee
{
    int eage;
    string ename;
    Employee(string en, int ea) // Private constructor of this class
    {
        cout << "Object created\n";
        ename = en;
        eage = ea;
    }

public:
    // dynamically allocate memory for creating object
    Employee *generateObj(string n, int a)
    {
        return new Employee(n, a);
    }
    void showInfo()
    {
        cout << "Employee name: " << ename << endl;
        cout << "Employee age: " << eage << endl;
    }
};

int main()
{
    Employee *object1 = NULL, *object2 = NULL;
    object1 = object1->generateObj("Ramesh", 27);
    object1->showInfo();
    object2 = object2->generateObj("Alok", 45);
    object2->showInfo();
    return 0;
}