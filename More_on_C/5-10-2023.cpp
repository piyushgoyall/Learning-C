#include <bits/stdc++.h>
using namespace std;

int main()
{
    int storage;                          // Create storage for the integer
    int *ptr = new (&storage) int(12345); // Use placement new to initialize at the address of 'storage'
    cout << *ptr;                         // Print the value
    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int *ptr = new int(12345);
//     // *ptr = 12345;
//     cout << *ptr<<endl;
//     delete ptr;
//     cout<<ptr;
//     return 0;
// }
