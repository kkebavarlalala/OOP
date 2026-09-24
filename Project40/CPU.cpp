#include "CPU.h"

CPU::CPU()
{
	model = " ";
	cores = 0;
	price = 0.0;
}

CPU::CPU(string model, int cores, double price)
{
	this->model = model;
	this->cores = cores;
	this->price = price;


}

void CPU::SetModel(string _model)
{
	this->model = model;

}

void CPU::SetCores(int _cores)
{
	this->cores = cores;

}

void CPU::SetPrice(double _price)
{
	this->price = price;

}

string CPU::GetModel()
{
	return string();
}

int CPU::GetCores()
{
	return 0;
}

double CPU::GetPrice()
{
	return 0.0;
}

void CPU::PrintInfo()
{
	cout << "GPU model: " << model << endl;
	cout << "Memory: " << cores  << endl;
	cout << "Price: " << price << endl;
}
