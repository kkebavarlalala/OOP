#include "GPU.h"#include "GPU.h"

GPU::GPU()
{
    model = "";
    memory = 0;
    price = 0.0;
}

GPU::GPU(string _model, int _memory, double _price)
{
    model = _model;
    memory = _memory;
    price = _price;
}

void GPU::SetModel(string _model)
{
    model = _model;
}

void GPU::SetMemory(int _memory)
{
    memory = _memory;
}

void GPU::SetPrice(double _price)
{
    price = _price;
}

string GPU::GetModel()
{
    return model;
}

int GPU::GetMemory()
{
    return memory;
}

double GPU::GetPrice()
{
    return price;
}

void GPU::PrintInfo()
{
    cout << "GPU model: " << model << endl;
    cout << "Memory: " << memory << " GB" << endl;
    cout << "Price: " << price << endl;
}