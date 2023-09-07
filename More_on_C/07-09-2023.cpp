#include <iostream>
#include <string.h>
using namespace std;
void findKey(int arr[5], int key)
{
    int i;
    bool foundIt = false;
    for (i = 0; i < 5; i++)
    {
        if (arr[i] == key)
        {
            foundIt = true;
            break;
        }
    }
    if (foundIt)
    {
        cout << key << " found at array index: " << i << endl;
    }
    else
    {
        cout << key << "Not found in array" << endl;
    }
}

void findDaysInMonth(int year, int monthNo)
{
    int numDays = 0;
    switch (monthNo)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        numDays = 31;
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        numDays = 30;
        break;
    case 2:
        if (((year % 2 == 0) && !(year & 100 == 0)) || (year % 400 == 0))
        {
            numDays = 29;
        }
        else
        {
            numDays = 28;
        }
        break;
    default:
        cout << "Invalid Inpu" << endl;
    }
    cout << numDays << " Number of days in month: " << monthNo << endl;
}

void findChar(string s, char ch)
{
    int max = s.length();
    int numCh = 0;
    for (int i = 0; i < max; i++)
    {
        if (s[i] != ch)
        {
            continue;
        }
        numCh++;
    }
    cout << ch << " found in string " << numCh << " number of times " << endl;
}

void findChar1(string s, char ch)
{
    int max = s.length();
    int indexes[max]; // Array to store the indexes of the character(s) found
    int numCh = 0;

    for (int i = 0; i < max; i++)
    {
        if (s[i] == ch)
        {
            indexes[numCh] = i; // Store the index where the character is found
            numCh++;
        }
    }

    if (numCh > 0)
    {
        cout << ch << " found in string " << numCh << " time(s) at index(es): ";
        for (int i = 0; i < numCh; i++)
        {
            cout << indexes[i];
            if (i < numCh - 1)
            {
                cout << ", ";
            }
        }
        cout << endl;
    }
    else
    {
        cout << ch << " not found in the string." << endl;
    }
}

int main()
{
    int arr[5] = {55, 66, 33, 77, 44};
    findKey(arr, 77);
    findDaysInMonth(2023, 9);
    string s = "uywevtrqytvbiqetqbvoewboiqugvwbcriqwirbqwiegrvbuwgvrbjubgbvrjwgriegtoiqwtoqewipvtqpwvt wepitvweibctq";
    findChar(s, 'u');
    findChar1(s, 'u');
}

// Type Cast
//     implicit
//             short i = 10;
//             int x = i;
//             short->int->long;
//             float->double;
//     explicit
//             double->float
//             long->int
//             double->int

// //        C++
//             double y = 55.55;
//             int z = int(y);

// //        C
//             double yy = 6.5;
//             int zz = (int)yy;