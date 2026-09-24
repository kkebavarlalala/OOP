#pragma once
#include <iostream>
using namespace std;

class CPU
{
	string model;
	int cores;
	double price;
public:
	CPU();
	CPU(string _model, int _cores, double _price);
	void SetModel(string _model);
	void SetCores(int _cores);
	void SetPrice(double _price);

	string GetModel();
	int GetCores();
	double GetPrice();

	void PrintInfo();

};

