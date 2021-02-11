#include<iostream>
#include "point.h"

using namespace std;
int Point::countP=0;
int main()
{
  Point A(4, 5);
  cout << "Point A," << A.GetX() << "," << A.GetY();
  A.GetC();
  Point B(A);
  cout << "Point B," << B.GetX() << "," << B.GetY();
  Point::GetC();

  return 0;
}
