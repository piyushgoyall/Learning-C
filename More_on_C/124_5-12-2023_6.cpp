// RETHROWING EXCEPTION

// #include <bits/stdc++.h>
// using namespace std;

// void myHandler()
// {
//     try
//     {
//         throw "some exception....";
//     }
//     catch (const char *)
//     {
//         cout << "Caught exception inside myHandler()!\n";
//         throw; // rethrowing exception
//     }
// }

// int main()
// {
//     cout << "main() standard!\n";
//     try
//     {
//         myHandler();
//     }
//     catch (const char *)
//     {
//         cout << "Caught exception inside main()!\n";
//     }
//     cout << "main() end!";
//     return 0;
// }

#include <iostream>
using namespace std;

void myHandler()
{
    try
    {
        throw "some exception....";
    }
    catch (const char *exception)
    {
        cout << "Caught exception inside myHandler() with message: " << exception << endl;
        throw; // rethrowing exception
    }
}

int main()
{
    cout << "main() standard!" << endl;
    try
    {
        myHandler();
    }
    catch (const char *exception)
    {
        cout << "Caught exception inside main() with message: " << exception << endl;
    }
    cout << "main() end!" << endl;
    return 0;
}
