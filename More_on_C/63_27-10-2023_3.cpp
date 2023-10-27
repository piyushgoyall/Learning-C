// Create three classes by name Day, Month and Year to store the day of the month, the month in two digits and the year in four digits respectively from the user.
// Now the print the entire date as dd-mm-yyyy format in main function().

#include <iostream>
#include <iomanip>

using namespace std;

class Day
{
private:
    int day;

public:
    Day(int d) : day(d) {}

    int getDay()
    {
        return day;
    }
};

class Month
{
private:
    int month;

public:
    Month(int m) : month(m) {}

    int getMonth()
    {
        return month;
    }
};

class Year
{
private:
    int year;

public:
    Year(int y) : year(y) {}

    int getYear()
    {
        return year;
    }
};

int main()
{
    int day, month, year;

    cout << "Enter the day: ";
    cin >> day;

    cout << "Enter the month: ";
    cin >> month;

    cout << "Enter the year: ";
    cin >> year;

    Day d(day);
    Month m(month);
    Year y(year);

    cout << "Date: " << setfill('0') << setw(2) << d.getDay() << "-"
         << setfill('0') << setw(2) << m.getMonth() << "-"
         << setfill('0') << setw(4) << y.getYear() << endl;

    return 0;
}
