// FRIEND FUNCTION MEMBER

#include <bits/stdc++.h>
using namespace std;
class Product;
class Category
{
public:
    void friendFunc(Product &pr1);
};
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
    friend void Category::friendFunc(Product &pr1);
};
void Category::friendFunc(Product &pr1)
{
    cout << "Product name: " << pr1.name << endl;
    cout << "Product id: " << pr1.id << endl;
}
int main()
{
    Product prod1("iPhone", "pr007");
    Category cat1;
    cat1.friendFunc(prod1);
    return 0;
}