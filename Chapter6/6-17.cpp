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
  Point *Ptr = new Point[2];
  Ptr[0].Move(5,10);
  Ptr[1].Move(15,20);
  cout << "Deleting..." << endl;
  delete []Ptr;
  return 0;
}
