// Q.18 (Inheritance)
// Create a class "Bonus" having public data member "bonus_percent" of integer type with value 12.
// Create another class "Employee" with private data member "salary of integer type. Create a constructor to accept the salary.
// Employee class should be derived from Bonus class.
// Also create a member function "calculateSalary()" in Employee class that should display the final salary
// after applying the bonus percentage on the employee's salary.

#include <iostream>
using namespace std;

class Bonus
{
public:
    int bonus_percent;

    Bonus()
    {
        bonus_percent = 12;
    }
};

class Employee : public Bonus
{
private:
    int salary;

public:
    Employee(int sal)
    {
        salary = sal;
    }

    void calculateSalary()
    {
        double bonus_amount = (salary * bonus_percent) / 100.0;
        double final_salary = salary + bonus_amount;

        cout << "Final Salary: " << final_salary << endl;
    }
};

int main()
{
    int empSalary;
    cout << "Enter employee's salary: ";
    cin >> empSalary;

    Employee emp(empSalary);
    emp.calculateSalary();

    return 0;
}

// // SOLUTION

// #include <bits/stdc++.h>
// using namespace std;

// // Parent class
// class Bonus
// {
// public:
//     int bonus_percent = 12;
// };

// // Child class
// class Employee : public Bonus
// {
//     int salary;

// public:
//     Employee(int sal)
//     {
//         salary = sal;
//     }
//     void calculateSalary()
//     {
//         cout << "Salary with bonus: " << salary + (salary * .12) << endl;
//     }
// };

// int main()
// {
//     Employee emp1(35000);
//     Employee emp2(55000);
//     emp1.calculateSalary();
//     emp2.calculateSalary();
// }