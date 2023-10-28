// Passing an object by address to a function.

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
void editInfo(Employee *ptr, string nm, string ec)
{
    ptr->name = nm;
    ptr->ecode = ec;
    cout << "Inside function obj.name: " << ptr->name << endl;
    cout << "Inside function obj.ecode: " << ptr->ecode << endl;
}
int main()
{
    string nm, ec;
    Employee e1("Ram", "emp001");
    cout << "Edit employee name: ";
    cin >> nm;
    cout << "Edit employee code: ";
    cin >> ec;
    editInfo(&e1, nm, ec);
    cout << "After editing: \n";
    cout << "New name: " << e1.name << endl;
    cout << "New code: " << e1.ecode << endl;
    return 0;
}