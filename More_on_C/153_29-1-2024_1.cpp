// Input n strings and display the largest string.

#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of strings: ";
    cin >> n;

    // Discard the newline character left in the input buffer
    cin.ignore();

    char sentence[1000];
    char largest[1000];
    int largestlen = 0;

    while (n--)
    {
        cout << "Enter a string: ";
        cin.getline(sentence, 1000);

        int len = strlen(sentence);
        if (len > largestlen)
        {
            largestlen = len;
            strcpy(largest, sentence);
        }
    }

    cout << "Largest Sentence: " << largest;
    return 0;
}

// #include <iostream>
// #include <cstring>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;

//     // Discard the newline character left in the input buffer
//     cin.ignore();

//     char sentence[1000];
//     char largest[1000];
//     int largestlen = 0;

//     while (n--)
//     {
//         cin.getline(sentence, 1000);
//         // cout << sentence<<endl;

//         int len = strlen(sentence);
//         if (len > largestlen)
//         {
//             largestlen = len;
//             strcpy(largest, sentence);
//         }
//     }

//     cout << "Largest Sentence: " << largest;
//     return 0;
// }