// FRIEND CLASS

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
    friend class Category;
};

class Category
{
public:
    string category = "Electronics";
    void display(Product &p1)
    {
        cout << "Product Category: " << category << endl;
        cout << "Product name: " << p1.name << endl;
        cout << "Product id: " << p1.id << endl;
    }
};

int main()
{
    Product prod1("Laptop", "pr001");
    Category cat1;
    cat1.display(prod1);
    return 0;
}