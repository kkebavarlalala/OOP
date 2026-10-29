#pragma once
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

class Student
{
    string name;
    string surname;
    string university;
    int age;

public:
    Student() {
        age = 0;
    }

    Student(string n, string sur, string un, int a)
    {
        name = n;
        surname = sur;
        university = un;
        age = a;
    }

    void Init()
    {
        cout << "Enter name: ";
        cin >> name;

        cout << "Enter surname: ";
        cin >> surname;

        cout << "Enter university: ";
        cin >> university;

        cout << "Enter age: ";
        cin >> age;
    }

    void Print()
    {
        cout << "Name: " << name << endl;
        cout << "Surname: " << surname << endl;
        cout << "University: " << university << endl;
        cout << "Age: " << age << endl;
    }

    void WriteFile(string filename)
    {
        ofstream file(filename, ios::app);

        if (file.is_open())
        {
            file << name << endl;
            file << surname << endl;
            file << university << endl;
            file << age << endl;

            file.close();
        }
    }

    static void ReadFile(string filename)
    {
        ifstream file(filename);

        if (file.is_open())
        {
            string n, sur, un;
            int a;

            while (file >> n >> sur >> un >> a)
            {
                Student s(n, sur, un, a);
                s.Print();
            }

            file.close();
        }
    }
};
