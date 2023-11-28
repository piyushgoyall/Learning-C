// HYBRID INHERITANCE

#include <bits/stdc++.h>
using namespace std;

class Vehicle
{
public:
    Vehicle()
    {
        cout << "This is a vehicle\n";
    }
};

class Fare
{
public:
    Fare()
    {
        cout << "Fare applies on this Vehicle.\n";
    }
};

class Car : public Vehicle
{
};

class Bus : public Vehicle, public Fare
{
};

int main()
{
    Car car1;
    Bus bus1;
    return 0;
}