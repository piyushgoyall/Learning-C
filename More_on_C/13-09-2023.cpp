// Overload

#include <iostream>
#include <string>
using namespace std;
class myString
{
private:
    string str;

public:
    myString(const string &s) : str(s) {}
    myString operator/(const myString &other)
    {
        string res = str + other.str;
        return myString(res);
    }

    void display()
    {
        cout << str << endl;
    }
};
int main()
{
    myString str1("Hello");
    myString str2("Java");
    myString result = str1 / str2;
    result.display();
    return 0;
}