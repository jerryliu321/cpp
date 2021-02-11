#include<iostream>
using namespace std;
int main()
{
  double a, b;
  double arctan(double x);
  a = 16.0*arctan(1/5.0);
  b = 4.0*arctan(1/239.0);
  cout << "PI=" << a-b << endl;
  return 0;
}

double arctan(double x)
{
  int i;
  double r,e,f,sqr;
  sqr=x*x;
  r=0;
  e=x;
  i=1;
  while(2/i>1e-15)
  {
    f=e/i;
    r=(i%4==1)?r+f:r-f;
    e=e*sqr;
    i+=2;
  }
  return r;
}
