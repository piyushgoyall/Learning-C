// LIST: EXAMPLE

#include <bits/stdc++.h>
using namespace std;
int main()
{
    // initializing list
    list<int> list1{1, 2, 3, 4};
    list<double> list2{25.5, 12.7, 4.5,5.4};
    list<char> list3{'c', 'p', 'a'};

    // display using range for loop
    cout << "list1 elements: ";
    for (int l1 : list1)
    {
        cout << l1 << " ";
    }

    cout << "\nlist2 elements: ";
    for (double l2 : list2)
    {
        cout << l2 << " ";
    }

    cout << "\nlist3 elemets: ";
    for (char l3 : list3)
    {
        cout << l3 << " ";
    }
    return 0;
}