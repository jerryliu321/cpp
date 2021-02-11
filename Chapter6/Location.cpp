#include<iostream>
#include "Location.h"
using namespace std;
Location::Location()
{
  X=Y=0;
  cout << "Default Constructor called." << endl;
}

Location::Location(int xx, int yy)
{
  X = xx;
  Y = yy;
  cout << "Constructor called." << endl;
}

Location::~Location()
{
  cout << "Destructor called." << endl;
}

void Location::Move(int x, int y)
{
  X = x;
  Y = y;
}

