#include "RAM.h"

RAM::RAM()
{
    size = 0;
    type = "";
    price = 0.0;
}

RAM::RAM(int _size, string _type, double _price)
{
    size = _size;
    type = _type;
    price = _price;
}

void RAM::SetSize(int _size)
{
    size = _size;
}

void RAM::SetType(string _type)
{
    type = _type;
}

void RAM::SetPrice(double _price)
{
    price = _price;
}

int RAM::GetSize()
{
    return size;
}

string RAM::GetType()
{
    return type;
}

double RAM::GetPrice()
{
    return price;
}

void RAM::PrintInfo()
{
    cout << "RAM size: " << size << " GB" << endl;
    cout << "RAM type: " << type << endl;
    cout << "Price: " << price << endl;
}