#pragma once
#include "TwoWheeler.h"

class Scooter : public TwoWheeler
{
    double engineVolume;
    double fuelConsumption;
    int passengersCount;

public:
    Scooter();
    Scooter(string m, string c, int y, double p, double s, double volume, double fuel, int passengers);

    void Horn();
    void Print();
    void Init();
    void Init(string m, string c, int y, double p, double s, double volume);

    void ShowMaxSpeed();
    void ShowFuelConsumption();
    void ShowWheelsCount();
    void ShowPassengersCount();
};