#include "Bicycle.h"

Bicycle::Bicycle()
{
    hasEngine = false;
    gearsCount = 1;
    passengersCount = 1;
}

Bicycle::Bicycle(string m, string c, int y, double p, double s, int gears, int passengers)
    : TwoWheeler(m, c, y, p, s, false)
{
    gearsCount = gears;
    passengersCount = passengers;
}

void Bicycle::RingBell()
{
    cout << "Ring ring!" << endl;
}

void Bicycle::Print()
{
    TwoWheeler::Print();
    cout << "Gears: " << gearsCount << endl;
}

void Bicycle::Init()
{
    TwoWheeler::Init();
    hasEngine = false;
    cout << "Enter gears count: ";
    cin >> gearsCount;
    cout << "Enter passengers count: ";
    cin >> passengersCount;
}

void Bicycle::Init(string m, string c, int y, double p, double s, int gears)
{
    TwoWheeler::Init(m, c, y, p, s, false);
    gearsCount = gears;
}

void Bicycle::ShowMaxSpeed()
{
    cout << "Bicycle max speed: " << speed << " km/h" << endl;
}

void Bicycle::ShowFuelConsumption()
{
    cout << "Bicycle fuel consumption: 0 L/100km (human-powered)" << endl;
}

void Bicycle::ShowWheelsCount()
{
    cout << "Bicycle wheels count: " << wheels << endl;
}

void Bicycle::ShowPassengersCount()
{
    cout << "Bicycle passengers count: " << passengersCount << endl;
}