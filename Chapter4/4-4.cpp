#include<iostream>
#include<math.h>
using namespace std;
class Point
{
  public:
    Point(int xx=0, int yy=0) {X=xx; Y=yy;}
    Point(Point &p);
    int GetX(){return X;}
    int GetY(){return Y;}
  private:
    int X, Y;
};
Point::Point(Point &p)
{
  X=p.X;
  Y=p.Y;
  cout << "Point copy construct function was called" << endl;
}

class Distance
{
  public:
    Distance(Point xp1, Point xp2);
    double GetDis() {return dist;}
  private:
    Point p1, p2;
    double dist;
};

Distance::Distance(Point xp1, Point xp2):p1(xp1),p2(xp2)
{
  cout << "Distance construct function was called" << endl;
  double x = double(p1.GetX() - p2.GetX());
  double y = double(p1.GetY() - p2.GetY());
  dist = sqrt(x*x+y*y);
}
int main()
{
  Point myp1(1,1), myp2(4,5);
  Distance myd(myp1, myp2);
  cout << "The distance is:";
  cout << myd.GetDis() << endl;
  
}
