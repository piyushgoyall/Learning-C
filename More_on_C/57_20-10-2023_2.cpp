// Destructor
// Whether you call or not Destructor is called anyways. The ~Book function in the following code is written so as to print a message on the destruction of the code. 

#include <bits/stdc++.h>
using namespace std;
class Book
{
public:
    Book()
    {
        cout << "This is a constructor!" << endl;
    }
    ~Book()
    {
        cout << "Destructor called!" << endl;
    }
};
int main()
{
    Book b1;
    Book b2;
    return 0;
}