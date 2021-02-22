#include<iostream>
#include"employee.h"
#include<string.h>
using namespace std;
int employee::employeeNo=1000;

employee::employee()
{
    char namestr[50];
    cout << "Please enter the next employee's name:";
    cin >> namestr;
    name = new char[strlen(namestr)+1];
    strcpy(name,namestr);
    individualEmpNo = employeeNo++;
    grade=1;
    accumPay=0.0;
}

employee::~employee()
{
    delete[] name;
}

void employee::pay(){}

void employee::promote(int increment)
{
    grade+=increment;
}

void employee::displayStatus(){}

technician::technician()
{
    hourlyRate=100;
}

void technician::pay()
{
    cout << "Please enter" << name << "The worktime number of this month:";
    cin >> workHours;
    accumPay=hourlyRate*workHours;
    cout << "Partime technician" << name << "number" << individualEmpNo << "This month's salary" << accumPay << endl;
}

void technician::displayStatus()
{
    cout << "Partime technician" << name << "number" << individualEmpNo << "grade is" << grade << "paid this month's salary" << accumPay << endl;
}

salesman::salesman()
{
    CommRate=0.04;
}

