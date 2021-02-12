#include<iostream>
using namespace std;
int main()
{
  static char c[10] = {'I',' ','a','m',' ','a',' ','b','o','y'};
  int i;
  for(i = 0; i < 10; i++)
    cout << c[i];
  cout << endl;
  return 0;
}
