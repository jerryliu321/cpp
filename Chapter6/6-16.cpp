#include<iostream>
using namespace std;
class Point
{
private:
  int X,Y;

public:
  Point()
  {
    X=Y=0;
    cout << "Defualt Constructor called." << endl;
  }

  Point(int xx, int yy)
  {
    X=xx; Y=yy;
    cout << "Constructor called," << endl;
  }

  ~Point() { cout << "Destructor called." << endl;}

  int GetX() { return X; }
  int GetY() { return Y; }
  void Move(int x, int y) {X=x; Y=y;}
};

int main()
{
  cout << "Step One:" << endl;
  Point *Ptr1 = new Point;
  delete Ptr1;
  cout << "Step Two:" << endl;
  Ptr1 = new Point(1,2);
  delete Ptr1;
  return 0;
}
