#include<iostream>
using namespace std;
int main()
{
  float (*cp)[9][8];
  int i, j, k;
  cp = new float[8][9][8];
  for (i = 0; i < 8; i++)
   for (j = 0; j < 9; j++)
    for (k = 0; k < 9; k++)
    *(*(*(cp+i)+j)+k) = i * 100 + j * 10 + k;
    
    for(i = 0; i < 8; i++)
    {
      for(j = 0; j < 9; j++)
      {
        for(k = 0; k < 9; k++)
        cout << cp[i][j][k] << " ";
        cout << endl;
      }
      cout << endl;
    }
  return 0;
}
