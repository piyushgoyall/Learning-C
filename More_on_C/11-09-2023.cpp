#include <bits/stdc++.h>
using namespace std;

class Area
{
private:
    int l;
    int b;

public:
    Area()
    {
        this->l = 10;
        this->b = 5;
    }

    Area(int l, int b)
    {
        this->l = l;
        this->b = b;
    }

    Area(const Area &obj)
    {
        this->l = obj.l;
        this->b = obj.b;
    }

    void area()
    {
        int a = this->l * this->b;
        cout << "Rect Area = " << a << endl;
    }

    // Getter functions to access private members
    int getLength() const
    {
        return l;
    }

    int getWidth() const
    {
        return b;
    }
};

int main()
{
    Area obj = Area();
    cout << "obj.l = " << obj.getLength() << endl;
    cout << "obj.b = " << obj.getWidth() << endl;

    obj.area();

    Area obj1 = Area(55, 20);
    cout << "obj1.l = " << obj1.getLength() << endl;
    cout << "obj1.b = " << obj1.getWidth() << endl;

    obj1.area();

    Area obj2 = obj1;
    cout << "obj2.l = " << obj2.getLength() << endl;
    cout << "obj2.b = " << obj2.getWidth() << endl;

    obj2.area();

    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;
// class Area
// {
// private:
//     int l;
//     int b;

// public:
//     Area()
//     {
//         this->l = 10;
//         this->b = 5;
//     }
//     Area(int l, int b)
//     {
//         this->l = l;
//         this->b = b;
//     }
//     // copy constructor
//     Area(Area &obj)
//     {
//         this->l = obj.l;
//         this->b = obj.b;
//     }
// };
// int main()
// {
//     Area obj = Area();
//     cout << "obj.l = " << obj.l << endl;
//     cout << "obj.b = " << obj.b << endl;
//     Area obj1 = Area(55, 20);
//     cout << "obj.l = " << obj1.l << endl;
//     cout << "obj.b = " << obj1.b << endl;
//     Area obj2 = obj1; // copy content from obj1 to obj2
//     cout << "obj2.l = " << obj2.l << endl;
//     cout << "obj2.b = " << obj2.b << endl;
//     return 0;
// }