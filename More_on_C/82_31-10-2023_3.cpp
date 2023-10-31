// (copy constructor)
// Create a class Product with two public data members as product_name and product_id.
// Pass product name and id with the help of constructor of Product class.
// Now create an object called pr1 of Product class.
// Then create a copy of this object as pr2.
// now print the values of product_name and product_id using pr2 object

#include <bits/stdc++.h>
using namespace std;
class Product
{
public:
    string product_name;
    string product_id;
    Product(string pname, string pid)
    {
        product_name = pname;
        product_id = pid;
    }
};
int main()
{
    Product pr1("iyg", "JGJF");
    Product pr2 = pr1;
    cout << pr2.product_name << endl;
    cout << pr2.product_id << endl;
    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;

// class Product
// {
// public:
//     Product(string name, string id)
//     {
//         product_name = name;
//         product_id = id;
//     }
//     Product(Product &other)
//     {
//         product_name = other.product_name;
//         product_id = other.product_id;
//     }

//     void printProductInfo()
//     {
//         cout << "Product Name: " << product_name << endl;
//         cout << "Product ID: " << product_id << endl;
//     }

// private:
//     string product_name;
//     string product_id;
// };

// int main()
// {
//     Product pr1("Laptop", "PR001");
//     Product pr2 = pr1;
//     pr2.printProductInfo();
//     return 0;
// }
