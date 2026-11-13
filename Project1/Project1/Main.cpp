#include <iostream>
#include "Scooter.h"
#include "Bicycle.h"
using namespace std;

int main()
{
    Vehicle* ptr = nullptr;
    int choice = 0;

    cout << "Choose vehicle type:\n";
    cout << "1 - Scooter\n";
    cout << "2 - Bicycle\n";
    cout << "Your choice: ";
    cin >> choice;

    if (choice == 1)
    {
        ptr = new Scooter();
    }
    else if (choice == 2)
    {
        ptr = new Bicycle();
    }
    else
    {
        cout << "Invalid choice!" << endl;
        return 1;
    }

    cout << "Initialization";
    ptr->Init();

    cout << "General Info (Print)";
    ptr->Print();

    cout << "Specific Characteristics ";
    ptr->ShowMaxSpeed();
    ptr->ShowFuelConsumption();
    ptr->ShowWheelsCount();
    ptr->ShowPassengersCount();

    delete ptr;
}