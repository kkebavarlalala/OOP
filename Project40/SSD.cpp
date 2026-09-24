#include "SSD.h"

SSD::SSD()
{
    size = 0;
    type = "";
    price = 0.0;
}

SSD::SSD(int _size, string _type, double _price)
{
    size = _size;
    type = _type;
    price = _price;
}

void SSD::SetSize(int _size)
{
    size = _size;
}

void SSD::SetType(string _type)
{
    type = _type;
}

void SSD::SetPrice(double _price)
{
    price = _price;
}

int SSD::GetSize()
{
    return size;
}

string SSD::GetType()
{
    return type;
}

double SSD::GetPrice()
{
    return price;
}

void SSD::PrintInfo()
{
    cout << "SSD size: " << size << " GB" << endl;
    cout << "SSD type: " << type << endl;
    cout << "Price: " << price << endl;
}