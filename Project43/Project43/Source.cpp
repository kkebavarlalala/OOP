#include "Student.h"
#include <iostream>
using namespace std;

int main()
{
    Student students[5];

    for (int i = 0; i < 5; i++)
    {
        cout << "Student " << i + 1 << endl;
        students[i].Init();
        cout << endl;
    }

    ofstream file("students.txt");
    file.close();

    for (int i = 0; i < 5; i++)
    {
        students[i].WriteFile("students.txt");
    }

    cout << "Students from file:" << endl;
    Student::ReadFile("students.txt");

    return 0;
}
