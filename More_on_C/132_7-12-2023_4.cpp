// LIST: FUNCTIONS

#include <bits/stdc++.h>
using namespace std;
int main()
{
    // initializing list
    list<int> list1{1, 2, 3, 4};

    // insert at beginning
    list1.push_front(0);

    // insert at end
    list1.push_back(5);

    // display using range for loop
    cout << "list1 elements: ";
    for (int l1 : list1)
    {
        cout << l1 << " ";
    }

    cout << "\nFirst element: " << list1.front();
    cout << "\nLast element: " << list1.back();

    // deleting first element
    list1.pop_front();

    // deleting last element
    list1.pop_back();

    cout << "\nFirst element: " << list1.front();
    cout << "\nLast element: " << list1.back();

    // length of list
    cout << "\nTotal number of elements in list1: " << list1.size();

    // deleting all elements
    list1.clear();
    cout << "\nTotal number of elements in list1 after using claer(): " << list1.size();
    cout << "\nIs list empty: " << list1.empty();
    return 0;
}