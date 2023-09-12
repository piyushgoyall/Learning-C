/* Function Overloading*/

#include <iostream>
#include <vector>
#include <string>
using namespace std;
class Item
{
public:
    string name;
    double price;

    Item(const string &n, double p) : name(n), price(p) {}
};
class ShoppingCart
{
private:
    vector<Item> items;

public:
    void addItem(const Item &item)
    {
        items.push_back(item);
    }
    double calTotalPrice()
    {
        double total = 0.0;
        for (const Item &item : items)
        {
            total += item.price;
        }
        return total;
    }
    double calTotalPrice(double discountPerc)
    {
        double total = calTotalPrice();
        double discount = total * (discountPerc / 100.0);
        return total - discount;
    }
};
int main()
{
    Item book("Meluha", 560.50);
    Item mobile("Nokia", 15560.50);
    ShoppingCart cart;
    cart.addItem(book);
    cart.addItem(mobile);
    double totalWithoutDisc = cart.calTotalPrice();
    double totalWithDisc = cart.calTotalPrice(10.0);
    cout << "Total without discount: " << totalWithoutDisc << endl;
    cout << "Total with discount: " << totalWithDisc << endl;
    return 0;
}