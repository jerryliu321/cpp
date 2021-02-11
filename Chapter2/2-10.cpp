#include<iostream>
using namespace std;

int main(){
  int i=0, j=0, n;
  cout << "Enter some integer(Enter 0 to quit):";
  cin >> n;
  while(n != 0)
  {
    if(n > 0) i += 1;
    if(n < 0) j += 1;
    cin >> n;
  }

  cout << "Positive amount:" << i << "nagative amount:" << j << endl;
  return 0;
}
