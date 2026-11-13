#pragma once
#include "Vehicle.h"

class TwoWheeler : public Vehicle
{
protected:
    int wheels;
    bool hasEngine;

public:
    TwoWheeler();
    TwoWheeler(string m, string c, int y, double p, double s, bool engine);

    void Print();
    void Init();
    void Init(string m, string c, int y, double p, double s, bool engine);

    void ShowMaxSpeed();
    void ShowFuelConsumption();
    void ShowWheelsCount();
    void ShowPassengersCount();
};