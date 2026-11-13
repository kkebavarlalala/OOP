#pragma once
#include "TwoWheeler.h"

class Bicycle : public TwoWheeler
{
    int gearsCount;
    int passengersCount;

public:
    Bicycle();
    Bicycle(string m, string c, int y, double p, double s, int gears, int passengers);

    void RingBell();
    void Print();
    void Init();
    void Init(string m, string c, int y, double p, double s, int gears);

    void ShowMaxSpeed();
    void ShowFuelConsumption();
    void ShowWheelsCount();
    void ShowPassengersCount();
};