// MULTILEVEL INHERITANCE

#include <bits/stdc++.h>
using namespace std;

class Grandfather
{
public:
    Grandfather()
    {
        cout << "Constructor of Grandfather!\n";
    }
    void Print1()
    {
        cout << "Process of Grandfather Class\n";
    }
};

class Father : public Grandfather
{
public:
    Father()
    {
        cout << "Constructor of Father!\n";
    }
    void Print2()
    {
        cout << "Process of Father Class.\n";
    }
};

class Son : public Father
{
public:
    Son()
    {
        cout << "Constructor of Son!\n";
    }
    void Print3()
    {
        cout << "Process of Son Class.\n";
    }
};

int main()
{
    Son obj;
    obj.Print1();
    obj.Print2();
    obj.Print3();

    return 0;
}