// STATIC MEMBER FUNCTIONS

#include <bits/stdc++.h>
using namespace std;
class Topics
{
    static int number;
    string stream = "Geometry";

public:
    static void total_topics()
    {
        cout << "Topics covered: " << number << endl;
    }
};
int Topics::number = 7;
int main()
{
    Topics t1;
    t1.total_topics();      // using object
    Topics::total_topics(); // using class
    return 0;
}