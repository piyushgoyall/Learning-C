#include <bits/stdc++.h>
#include "173_27_2_2024_1.h"
using namespace std;

int main()

{
    List l;
    l.push_front(1);
    l.push_back(2);
    l.push_front(0);
    l.insert(3, 2);

    Node *head = l.begin();
    while (head != nullptr)
    {
        cout << head->getdata() << " --> ";
        head = head->next;
    }
    cout << "NULL" << endl;
    // int key;
    // cin >> key;

    // if (l.search(key))
    // {
    //     cout << "found";
    // }

    // else
    //     cout << "Not Found";

    // //rec search
    //     int key;
    //     cin >> key;

    //     Node *head1 = l.begin();
    //     if (l.recsearch(head1, key))
    //     {
    //         cout << "found";
    //     }

    //     else
    //         cout << "Not Found";

    int key;
    cin >> key;
    cout << l.searchidx(key);

    return 0;
}