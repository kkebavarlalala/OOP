#pragma once
#include <iostream>
#include "CPU.h"
#include "GPU.h"
#include "RAM.h"
#include "SSD.h"
using namespace std;

class Laptop
{
	CPU cpu;
	GPU gpu;
	RAM ram;
	SSD ssd;
	string model;
	double price;
public:
	Laptop();
	Laptop(CPU _cpu, GPU _gpu, RAM _ram, SSD _ssd, string _model, double _price);
	void PrintInfo();

};

