#pragma once
#include <iostream>
using namespace std;

class RAM
{
    int size;
    string type;
    double price;

public:
    RAM();
    RAM(int _size, string _type, double _price);

    void SetSize(int _size);
    void SetType(string _type);
    void SetPrice(double _price);

    int GetSize();
    string GetType();
    double GetPrice();

    void PrintInfo();
};