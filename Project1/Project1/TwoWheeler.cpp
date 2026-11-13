#include "TwoWheeler.h"

TwoWheeler::TwoWheeler()
{
    wheels = 2;
    hasEngine = false;
}

TwoWheeler::TwoWheeler(string m, string c, int y, double p, double s, bool engine)
    : Vehicle(m, c, y, p, s)
{
    wheels = 2;
    hasEngine = engine;
}

void TwoWheeler::Print()
{
    Vehicle::Print();
    cout << "Wheels: " << wheels << endl;
    cout << "Has Engine: " << (hasEngine ? "Yes" : "No") << endl;
}

void TwoWheeler::Init()
{
    Vehicle::Init();
    wheels = 2;
}

void TwoWheeler::Init(string m, string c, int y, double p, double s, bool engine)
{
    model = m;
    color = c;
    year = y;
    price = p;
    speed = s;
    wheels = 2;
    hasEngine = engine;
}

void TwoWheeler::ShowMaxSpeed()
{
    cout << "TwoWheeler max speed: " << speed << " km/h" << endl;
}

void TwoWheeler::ShowFuelConsumption()
{
    cout << "TwoWheeler fuel consumption: depends on vehicle type" << endl;
}

void TwoWheeler::ShowWheelsCount()
{
    cout << "TwoWheeler wheels count: " << wheels << endl;
}

void TwoWheeler::ShowPassengersCount()
{
    cout << "TwoWheeler passengers count: 1-2" << endl;
}