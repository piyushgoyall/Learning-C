// SINGLE INHERITANCE

#include <bits/stdc++.h>
using namespace std;

// base class
class Vehicle
{
public:
    string fuel = "Petrol";
    Vehicle()
    {
        cout << "This is a Vehicle\n";
    }
};

// sub class derived from a single base classes

class Car : public Vehicle
{
public:
    int wheels = 4;
};

// Sub class derived from a single base classes

class Bike : public Vehicle
{
public:
    int wheels = 2;
};

int main()
{
    Car car1;
    Bike bike1;

    cout << "Fuel of car1: " << car1.fuel << endl;
    cout << "Wheels in car1: " << car1.wheels << endl;
    cout << "Fuel of bike1: " << bike1.fuel << endl;
    cout << "Wheels in bike1: " << bike1.wheels << endl;
    return 0;
}