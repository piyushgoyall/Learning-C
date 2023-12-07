// VECTOR

#include <bits/stdc++.h>
using namespace std;
int main()
{
    // initializing
    vector<int> v1 = {1, 2, 3, 4, 5};

    // size befor adding
    cout << "Size (before add): " << v1.size() << endl;

    // add an element
    v1.push_back(6);
    v1.push_back(7);

    // size after adding
    cout << "Size (after add): " << v1.size() << endl;

    // edit 3rd element
    v1.at(2) = 300;

    // delete last element
    v1.pop_back();

    // returns last element
    cout << "Last element: " << v1.back() << endl;

    // using for loop
    cout << "v1 elements: ";
    for (int i = 0; i < v1.size(); i++)
    {
        cout << v1.at(i) << " ";
    }

    // check if empty (returns 1 if empty)
    cout << "\nv1 is empty: " << v1.empty();
    return 0;
}