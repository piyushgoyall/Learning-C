// // CLASS TYPE TO CLASS TYPE

#include <bits/stdc++.h>
using namespace std;

class destinationClass; // Forward declaration

class sourceClass
{
private:
    int value;

public:
    sourceClass(int val) : value(val) {} // Fixed typo here

    // Conversion function to convert sourceClass to destinationClass
    operator destinationClass();
};

class destinationClass
{
private:
    double convertedValue;

public:
    destinationClass(double val) : convertedValue(val) {}

    // Function to display the converted value
    void displayConvertedValue()
    {
        cout << "Converted Value: " << convertedValue << endl;
    }
};

// Move the definition of the conversion function after destinationClass definition
sourceClass::operator destinationClass()
{
    // Perform the conversion logic here
    double convertedValue = static_cast<double>(value) * 2.5;

    // Return an instance of destinationClass
    return destinationClass(convertedValue);
}

int main()
{
    // Create an instance of sourceClass
    sourceClass sourceObject(7);

    // Convert sourceClass to destinationClass using the conversion operator
    destinationClass destObject = sourceObject; // Invoke the conversion operator

    // Display the converted value
    destObject.displayConvertedValue();
    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;

// class destinationClass; // FORWARD DECLARATION

// class sourceClass
// {
// private:
//     int value;

// public:
//     sourceClass(int val) : value(val) {}

//     // Conversion function to convert sourceClass to destinationClass
//     operator destinationClass();
// };

// class destinationClass
// {
// private:
//     double convertedClass;

// public:
//     destinationClass(double val) : convertedValue(val) {}

//     // Function to display the converted value
//     void displayConvertedValue()
//     {
//         cout << "Converted Value: " << convertedValue << endl;
//     }
// };

// // Conversion function definition
// sourceClass::operator destinationClass()
// {
//     // Perform the conversion logic here
//     double convertedValue = static_cast<double>(value) * 2.5;

//     // Return an instance of destinationClass
//     return destinationClass(convertedValue);
// }

// int main()
// {
//     // Create an instance of sourceClass
//     sourceClass sourceObject(7);

//     // Convert sourceClass to destinationClass using the conversion operator function
//     destinationClass destObject = sourceObject;

//     // Display the converted value
//     destObject.displayConvertedValue();
//     return 0;
// }