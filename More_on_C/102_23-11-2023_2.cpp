// Single Inheritance (Protected)

#include <bits/stdc++.h>
using namespace std;

// base class
class Vehicle
{
protected:
    string fuel = "Petrol"; // Protected member
};

// sub class derived from a single base classes

class Car : public Vehicle
{
public:
    int wheels = 4;
    void vehicleItems()
    {
        cout << "Fuel of carl: " << fuel << endl;
    }
};

// Sub class derived from a single base classes

class Bike : public Vehicle
{
public:
    int wheels = 2;
    void vehicleItems()
    {
        cout << "Fuel of bikes: " << fuel << endl;
    }
};

int main()
{
    Car car1;
    Bike bike1;

    car1.vehicleItems();
    bike1.vehicleItems();
    cout<< "Wheels in car1: " << car1.wheels << endl;
    cout << "Wheels in bike1: " << bike1.wheels << endl;
    return 0;
}