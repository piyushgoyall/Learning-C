// Change the string aaabbcccdd to a3b2c3d2 but make changes in the original string.

#include <bits/stdc++.h>
using namespace std;

vector<char> compress(vector<char> &input)
{
    string out;
    int count = 1;
    for (int i = 0; i < input.size(); i++)
    {
        // int count = 1;
        while (i < input.size() - 1 && input[i] == input[i + 1])
        {
            count++;
            i++;
        }
        out = out + input[i];
        if (count == 1)
        {
            continue;
        }

        out = out + to_string(count);
        count = 1;
    }
    input.clear();
    for (auto i : out)
    {
        input.push_back(i);
    }
    return input;
}

int main()
{
    vector<char> input;
    char temp;
    while (cin.get(temp) and temp != '\n')
    {
        input.push_back(temp);
    }

    vector<char> output = compress(input);
    for (auto i : output)
        cout << i;
    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;

// string duplicate(string s)
// {
//     // sort(s.begin(), s.end());
//     string output;

//     for (int i = 0; i < (s.length()); i++)
//     {
//         int count = 1;
//         while (i < s.length() - 1 && s[i] == s[i + 1])
//         {
//             i++;
//             count++;
//         }

//         output += s[i];
//         if (count > 1)
//             output += to_string(count);

//         // if (count > 1)
//         //     output = output + s[i] + to_string(count);
//         // else
//         //     output = output + s[i];
//     }
//     return output;
// }

// int main()
// {
//     string s;
//     getline(cin, s);
//     cout << duplicate(s);
//     return 0;
// }

// PRINT THE VOWELS IN A STRING
// #include <bits/stdc++.h>
// using namespace std;

// void checkVowel(string s)
// {
//     string output;
//     for (auto i : s)
//     {
//         if (i == 'a' || i == 'e' || i == 'i' || i == 'o' || i == 'u')
//         {
//             output.push_back(i);
//         }
//     }
//     cout << output << endl;
// }

// int main()
// {
//     string s;
//     getline(cin, s);
//     checkVowel(s);
//     return 0;
// }

// PRINT THE VOWELS IN A STRING
// #include <bits/stdc++.h>
// using namespace std;

// void checkVowel(string s)
// {
//     int count = 0;
//     for (int i = 0; i < (s.length()); i++)
//     {
//         if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
//         {
//             cout << s[i] << " ";
//             count++;
//         }
//     }
//     if (count == 0)
//     {
//         cout << "No vowels found" << endl;
//     }
// }

// int main()
// {
//     string s;
//     getline(cin, s);
//     checkVowel(s);
//     return 0;
// }

// #include <iostream>
// #include <string>
// using namespace std;

// void compressString(string &sen)
// {
//     int n = sen.length();
//     int output_index = 0;

//     for (int i = 0; i < n; i++)
//     {
//         int count = 1;

//         while (i < n - 1 && sen[i] == sen[i + 1])
//         {
//             count++;
//             i++;
//         }

//         sen[output_index++] = sen[i];

//         if (count > 1)
//         {
//             sen[output_index++] = count + '0';
//         }
//     }

//     sen.resize(output_index); // Trim the string to the new size
// }

// int main()
// {
//     // Get input string from the user
//     string input;
//     cout << "Enter a string: ";
//     getline(cin, input);

//     // Compress the input string
//     compressString(input);

//     // Display the compressed string
//     cout << "Compressed String: " << input << endl;

//     return 0;
// }

// #include <iostream>
// #include <string>
// using namespace std;

// string compressString(const string &input)
// {
//     string compressed;
//     int n = input.length();

//     for (int i = 0; i < n; i++)
//     {
//         int count = 1;

//         while (i < n - 1 && input[i] == input[i + 1])
//         {
//             count++;
//             i++;
//         }

//         compressed += input[i];

//         if (count > 1)
//         {
//             compressed += to_string(count);
//         }
//     }

//     return compressed;
// }

// int main()
// {
//     // Get input string from the user
//     string input;
//     cout << "Enter a string: ";
//     getline(cin, input);

//     // Compress the input string
//     string compressedString = compressString(input);

//     // Display the compressed string
//     cout << "Compressed String: " << compressedString << endl;

//     return 0;
// }

// #include <iostream>
// #include <cstring>
// using namespace std;

// int main()
// {
//     string sen;
//     getline(cin, sen);
//     int n = sen.length();
//     int output_index = 0;

//     for (int i = 0; i < n; i++)
//     {
//         int count = 1;

//         while (i < n - 1 && sen[i] == sen[i + 1])
//         {
//             count++;
//             i++;
//         }

//         if (count > 1)
//         {
//             sen[output_index++] = sen[i];
//             sen[output_index++] = count + '0';
//         }
//         else
//         {
//             sen[output_index++] = sen[i];
//         }
//     }
//     sen[output_index] = '\0';

//     cout << sen << endl;
//     return 0;
// }

// #include <iostream>
// #include <cstring>
// using namespace std;
// int main()
// {
//     string sen;
//     getline(cin, sen);
//     int n = sen.length();
//     for (int i = 0; i < n; i++)
//     {
//         int count = 1;

//         // if (sen[i] == sen[i + 1])
//         // {
//         //     count++;
//         // }

//         while (i < n - 1 && sen[i] == sen[i + 1])
//         {
//             count++;
//             i++;
//         }

//         sen[count - 1] = count + '0';
//     }

//     cout << sen << endl;
//     return 0;
// }