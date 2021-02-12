#include<iostream>
using namespace std;
class Point
{
private:
  int X, Y;
public:
  Point(int xx=0, int yy=0){X=xx; Y=yy;}
  int GetX() {return X;}
  int GetY() {return Y;}
};

int main()
{
  Point A(4,5);
  Point *p1=&A;
  int (Point::*p_GetX)() = Point::GetX;

  cout << (A.*p_GetX)() << endl;
  cout << p1->GetX() << endl;
  cout << A.GetX() << endl;
  return 0;
}
