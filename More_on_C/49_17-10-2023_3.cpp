#include <bits/stdc++.h>
using namespace std;

class book
{
public:
    string title;
    string author;
    float price;

    void showInfo()
    {
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Price: " << price << endl;
    }
};
int main()
{
    book b1;
    b1.title = "400 days";
    b1.author = "Chetan Bhagat";
    b1.price = 550;
    cout << "Book 1: " << endl;
    b1.showInfo();

    book b2;
    b2.title = "200 days";
    b2.author = "Agatha Christie";
    b2.price = 476;
    cout << endl
         << "Book 2: " << endl;
    b2.showInfo();

    return 0;
}