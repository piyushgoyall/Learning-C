// Passing an object by reference to a function.

#include <bits/stdc++.h>
using namespace std;
class Employee
{
public:
    string name, ecode;
    Employee(string nm, string ec)
    {
        name = nm;
        ecode = ec;
        cout << "Employee name: " << name << endl;
        cout << "Employee ecode: " << ecode << endl;
    }
};
void editInfo(Employee &obj, string nm, string ec)
{
    obj.name = nm;
    obj.ecode = ec;
    cout << "Inside function obj.name: " << obj.name << endl;
    cout << "Inside function obj.ecode: " << obj.ecode << endl;
}
int main()
{
    string nm, ec;
    Employee e1("Ram", "emp001");
    cout << "Edit employee name: ";
    cin >> nm;
    cout << "Edit employee code: ";
    cin >> ec;
    editInfo(e1, nm, ec);
    cout << "After editing: \n";
    cout << "New name: " << e1.name << endl;
    cout << "New code: " << e1.ecode << endl;
    return 0;
}