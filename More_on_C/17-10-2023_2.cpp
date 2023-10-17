#include <bits/stdc++.h>
using namespace std;

class Employee
{
public:
    string name;
    string ecode;
    int age;
};
int main()
{
    Employee e1;
    e1.name = "Ramesh";
    e1.ecode = "e001";
    e1.age = 34;
    cout << "Employee 1 details:" << endl;
    cout << "name: " << e1.name << endl;
    cout << "ecode: " << e1.ecode << endl;
    cout << "age: " << e1.age << endl;

    Employee e2;
    e2.name = "Lokesh";
    e2.ecode = "e002";
    e2.age = 28;

    cout << "Employee 2 details:" << endl;
    cout << "name: " << e2.name << endl;
    cout << "ecode: " << e2.ecode << endl;
    cout << "age: " << e2.age << endl;
    return 0;
}