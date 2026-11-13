#include "Scooter.h"

Scooter::Scooter()
{
    hasEngine = true;
    engineVolume = 0.0;
    fuelConsumption = 0.0;
    passengersCount = 1;
}

Scooter::Scooter(string m, string c, int y, double p, double s, double volume, double fuel, int passengers)
    : TwoWheeler(m, c, y, p, s, true)
{
    engineVolume = volume;
    fuelConsumption = fuel;
    passengersCount = passengers;
}

void Scooter::Horn()
{
    cout << "Beep beep!" << endl;
}

void Scooter::Print()
{
    TwoWheeler::Print();
    cout << "Engine Volume: " << engineVolume << " cc" << endl;
}

void Scooter::Init()
{
    TwoWheeler::Init();
    hasEngine = true;
    cout << "Enter engine volume (cc): ";
    cin >> engineVolume;
    cout << "Enter fuel consumption (L/100km): ";
    cin >> fuelConsumption;
    cout << "Enter passengers count: ";
    cin >> passengersCount;
}

void Scooter::Init(string m, string c, int y, double p, double s, double volume)
{
    TwoWheeler::Init(m, c, y, p, s, true);
    engineVolume = volume;
}

void Scooter::ShowMaxSpeed()
{
    cout << "Scooter max speed: " << speed << " km/h" << endl;
}

void Scooter::ShowFuelConsumption()
{
    cout << "Scooter fuel consumption: " << fuelConsumption << " L/100km" << endl;
}

void Scooter::ShowWheelsCount()
{
    cout << "Scooter wheels count: " << wheels << endl;
}

void Scooter::ShowPassengersCount()
{
    cout << "Scooter passengers count: " << passengersCount << endl;
}