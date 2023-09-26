/*
Create Inventory Management System to track products categories and suppliers in a retail store.
Your program should model 'Has-A' relationship between these entities and provide functionality to managing them.
*/

#include <bits/stdc++.h>
using namespace std;

// Supplier class
class Supplier
{
public:
    string name;
    string contact;

    Supplier(const string &name, const string &contact) : name(name), contact(contact) {}
};

// Product class
class Product
{
public:
    string name;
    double price;
    Supplier supplier;

    Product(const string &name, double price, const Supplier &supplier) : name(name), price(price), supplier(supplier) {}
};

// Category class
class Category
{
public:
    string name;
    vector<Product> products;

    Category(const string &name) : name(name) {}

    // Add a product to the category
    void addProduct(const Product &product)
    {
        products.push_back(product);
    }

    // List products in the category
    void listProducts()
    {
        cout << "Products in Category '" << name << "':" << endl;
        for (const Product &product : products)
        {
            cout << "Name: " << product.name << ", Price: " << product.price << ", Supplier: " << product.supplier.name << endl;
        }
    }
};

int main()
{
    // Create suppliers
    Supplier supplier1("Supplier A", "supplierA@example.com");
    Supplier supplier2("Supplier B", "supplierB@example.com");

    // Create products
    Product product1("Product 1", 10.99, supplier1);
    Product product2("Product 2", 8.99, supplier2);

    // Create categories
    Category category1("Electronics");
    Category category2("Clothing");

    // Add products to categories
    category1.addProduct(product1);
    category2.addProduct(product2);

    // List products in categories
    category1.listProducts();
    category2.listProducts();

    return 0;
}
