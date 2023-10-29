#include <bits/stdc++.h>
using namespace std;
class Book
{
private:
    string title;
    string author;
    float price;

public:
    Book(string t, string a, float p)
    {
        title = t;
        author = a;
        price = p;
    }
    void showInfo()
    {
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Price: " << price << endl;
    }
};
int main()
{
    Book b1("Inspiration", "Sadhguru", 1500);
    b1.showInfo();
    string x, y;
    int z;
    cin >> x >> y >> z;
    Book b2(x, y, z);
    b2.showInfo();
    return 0;
}