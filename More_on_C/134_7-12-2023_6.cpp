// SET / MULTISET

#include <iostream>
#include <set>

using namespace std;

int main() {
    // initializing set in ascending order
    set<int> s1 = {23, 45, 12, 34, 7, 45};
    cout << "s1 elements: ";
    for (auto i : s1) {
        cout << i << " ";
    }

    // initializing multiset in descending order
    multiset<int, greater<>> s2 = {23, 45, 12, 34, 7, 45};
    cout << "\ns2 elements: ";
    for (auto i : s2) {
        cout << i << " ";
    }

    // inserting element into set s1
    s1.insert(100);
    cout << "\ns1 elements (after insert): ";
    for (auto i : s1) {
        cout << i << " ";
    }

    return 0;
}



// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     // initializing set in ascending order
//     set<int> s1 = {23,45,12,34,7,45};
//     cout<<"s1 elements: ";
//     for(auto i:s1)
//     {
//         cout<<i<<" ";
//     }   

//     // initializing set in descending order
//     mutliset<int>

//     // inserting element
//     s1.insert(100);
//     cout<<"\ns1 elements (after insert): ";
//     for(auto)

//     return 0;
// }