#pragma once
#include <iostream>
using namespace std;

class GPU
{
    string model;
    int memory;
    double price;

public:
    GPU();
    GPU(string _model, int _memory, double _price);

    void SetModel(string _model);
    void SetMemory(int _memory);
    void SetPrice(double _price);

    string GetModel();
    int GetMemory();
    double GetPrice();

    void PrintInfo();
};