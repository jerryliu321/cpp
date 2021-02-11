#include<iostream>
#include"Location.h"
using namespace std;
int main()
{
  cout << "Enter main..." << endl;
  Location A[2];
  for(int i = 0; i < 2; i++)
    A[i].Move(i+10, i+20);
  cout << "Exiting main..." << endl;
  return 0;
}
