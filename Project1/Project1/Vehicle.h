#pragma once
#include <iostream>
#include <string>
using namespace std;

class Vehicle
{
protected:
    string model;
    int year;
    string color;
    double price;
    double speed;

public:
    Vehicle();
    Vehicle(string m, string c, int y, double p, double s);
    virtual ~Vehicle();

    virtual void Print();
    virtual void Init();

    virtual void ShowMaxSpeed() = 0;
    virtual void ShowFuelConsumption() = 0;
    virtual void ShowWheelsCount() = 0;
    virtual void ShowPassengersCount() = 0;
};