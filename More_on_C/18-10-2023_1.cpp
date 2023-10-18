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
    return 0;
}