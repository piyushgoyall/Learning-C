// COPY CONSTRUCTOR

#include <bits/stdc++.h>
using namespace std;
class Employee
{
public:
    string empname, empcode, empdept;
    Employee(string ename, string ecode)
    {
        empname = ename;
        empcode = ecode;
    }
};
int main()
{
    Employee emp1("Ramesh", "emp007");

    Employee emp2 = emp1;

    cout << emp1.empname << endl;
    cout << emp1.empcode << endl;
    cout << "\n";
    cout << emp2.empname << endl;
    cout << emp2.empcode << endl;

    emp1.empdept = "Sales";
    cout << emp2.empdept;
    return 0;
}