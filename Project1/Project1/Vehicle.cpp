#include "Vehicle.h"

Vehicle::Vehicle()
{
    model = "";
    color = "";
    year = 0;
    price = 0.0;
    speed = 0.0;
}

Vehicle::Vehicle(string m, string c, int y, double p, double s)
{
    model = m;
    color = c;
    year = y;
    price = p;
    speed = s;
}

Vehicle::~Vehicle() {}

void Vehicle::Print()
{
    cout << "Model: " << model << endl;
    cout << "Color: " << color << endl;
    cout << "Year: " << year << endl;
    cout << "Price: " << price << endl;
    cout << "Speed: " << speed << endl;
}

void Vehicle::Init()
{
    cout << "Enter model: ";
    cin >> model;
    cout << "Enter color: ";
    cin >> color;
    cout << "Enter year: ";
    cin >> year;
    cout << "Enter price: ";
    cin >> price;
    cout << "Enter max speed: ";
    cin >> speed;
}