#include "Laptop.h"
#include <iostream>

Laptop::Laptop()
{
}

Laptop::Laptop(CPU _cpu, GPU _gpu, RAM _ram, SSD _ssd, string _model, double _price)
{
	cpu = _cpu;
	gpu = _gpu;
	ram = _ram;
	ssd = _ssd;
	model = _model;
	price = _price;
}

void Laptop::PrintInfo()
{
    cout << "Model: " << model << endl;
    cout << "Price: " << price << endl;

    cpu.PrintInfo();
    gpu.PrintInfo();
    ram.PrintInfo();
    ssd.PrintInfo();

    cout << endl;
}