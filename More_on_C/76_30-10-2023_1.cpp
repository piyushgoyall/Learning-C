// FRIEND FUNCTION GLOBAL

#include <bits/stdc++.h>
using namespace std;
class Product
{
private:
    string name, id;

public:
    Product(string pname, string pid)
    {
        name = pname;
        id = pid;
    }
    friend void friendFunc(Product &pr1);
};
void friendFunc(Product &pr1)
{
    cout << "Product name: " << pr1.name << endl;
    cout << "Producd id: " << pr1.id << endl;
}
int main()
{
    Product prod1("iPhone", "pr007");
    friendFunc(prod1);
    return 0;
}