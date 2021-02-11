#include<iostream>
using namespace std;
class Point
{
  public:
    Point(int xx = 0, int yy = 0) {X=xx; Y=yy; countP++;}
    Point(Point &p);
    int GetX() {return X;}
    int GetY() {return Y;}
    static void GetC() {cout << "Object id = " << countP << endl;}
  private:
    int X, Y;
    static int countP;
};

Point::Point(Point &p)
{
  X = p.X;
  Y = p.Y;
  countP++;
}

int Point::countP=0;

int main()
{
  Point A(4,5);
  cout << "Point A," << A.GetX() << "," << A.GetY();
  A.GetC();
  Point B(A);
  cout <<"Point B," << B.GetX() << "," << B.GetY();
  Point::GetC();
  return 0;
}
