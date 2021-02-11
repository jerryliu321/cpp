#include<iostream>
using namespace std;
class Point
{
  public:
    Point(int xx=0, int yy=0) {X=xx, Y=yy; countP++;}
    Point(Point &p);
    int GetX() {return X;}
    int GetY() {return Y;}
    static void GetC() {cout << "Object id=" << countP << endl;}
  private:
    int X, Y;
    static int countP;
};
