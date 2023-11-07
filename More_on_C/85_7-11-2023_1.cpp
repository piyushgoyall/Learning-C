// PRIVATE CONSTRUCTOR

#include <bits/stdc++.h>
using namespace std;
class Employee
{
private:
    string empname, empcode;
    Employee()
    {
        cout << "emp1: information not available!" << endl;
    }
    Employee(string name)
    {
        empname = name;
        cout << "emp2 name: " << empname << endl;
    }
    Employee(string name, string code)
    {
        empname = name;
        empcode = code;
        cout << "emp3 name: " << empname << endl;
        cout << "emp3 code: " << empcode << endl;
    }
    friend class HR;
};
class HR
{
public:
    HR()
    {
        Employee emp1;
        Employee emp2("Ramesh");
        Employee emp3("Alok", "emp007");
    }
};
int main()
{
    HR hr1;
    return 0;
}