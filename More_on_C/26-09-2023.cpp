// HAS A RELATIONSHIP
#include <bits/stdc++.h>
using namespace std;

class author
{
public:
    string authname;
    int mobile;
    string location;

    author(string authname, int mobile, string location)
    {
        this->authname = authname;
        this->mobile = mobile;
        this->location = location;
    }
};

class book
{
public:
    string bname;
    string pbid;
    int price;
    author auth;

    book(string bname, string pbid, int price, author auth)
    {
        this->bname = bname;
        this->pbid = pbid;
        this->price = price;
        this->auth = auth;
    }

    // Getter method to access author's name
    string getAuthorName()
    {
        return auth.authname;
    }
};

int main()
{
    author aut("PK", 123456789, "Punjab");
    book bk("Java", "ID001", 550, aut);

    cout << "Book Name: " << bk.bname << endl;
    cout << "Book Pub1 ID: " << bk.pbid << endl;
    cout << "Book Price: " << bk.price << endl;
    cout << "Author Name: " << bk.getAuthorName() << endl;

    return 0;
}
