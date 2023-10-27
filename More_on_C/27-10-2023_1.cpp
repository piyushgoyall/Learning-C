// STATIC OBJECTS (the scope of the object remains till the program terminates or ends if we use static).

#include <bits/stdc++.h>
using namespace std;
class Myclass
{
public:
    Myclass()
    {
        cout << "Inside constructor\n";
    }
    ~Myclass()
    {
        cout << "Inside Destructor\n";
    }
};
int main()
{
    int x = 0;
    if (x == 0)
    {
        static Myclass obj;
    }
    cout << "End of main\n";
    return 0;
}