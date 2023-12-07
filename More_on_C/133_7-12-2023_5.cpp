// DEQUE: EXAPMLE CODE

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int pos;
    // initializing dequeue
    deque<int> dq1{1, 2, 3, 4};

    // insert at front
    dq1.push_front(0);

    // insert at end
    dq1.push_back(5);

    // display using range for loop
    cout << "dq1 elements: ";
    for (int d1 : dq1)
    {
        cout << d1 << " ";
    }

    // deleting front element
    dq1.pop_front();

    cout << "\ndq1 elements (after deleting): ";
    for (int d1 : dq1)
    {
        cout << d1 << " ";
    }
    return 0;
}