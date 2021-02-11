#include<iostream>
#include<math.h>
using namespace std;
const double pi(3.14159265);
int main()
{
  double a, b;
  cin >> a;
  b = a*pi/180;
  cout << "sin("<< a << ")=" << sin(b) << endl;
  cout << "sin("<< a << ")=" << cos(b) << endl;
  cout << "sin("<< a << ")=" << tan(b) << endl;
  
}
