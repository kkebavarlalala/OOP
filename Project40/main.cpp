#include <iostream>
#include "Laptop.h"
using namespace std;

int main()
{
    CPU cpu1("Intel Core i7", 3.5, 8);
    GPU gpu1("RTX 4060", 8, 15000);
    RAM ram1(16, "DDR5", 3000);
    SSD ssd1(512, "NVMe", 2500);

    Laptop laptop1(cpu1, gpu1, ram1, ssd1, "Dell", 35000);
    laptop1.PrintInfo();


    CPU cpu2("AMD Ryzen 5", 3.0, 6);
    GPU gpu2("RTX 3060", 6, 12000);
    RAM ram2(16, "DDR4", 2500);
    SSD ssd2(1000, "NVMe", 3500);

    Laptop laptop2(cpu2, gpu2, ram2, ssd2, "HP", 30000);
    laptop2.PrintInfo();

    return 0;
}