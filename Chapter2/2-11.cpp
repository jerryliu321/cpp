#include<iostream>
using namespace std;
enum game_result{WIN, LOSE, TIE, CANCEL};
int main()
{
  game_result result;
  enum game_result omit = CANCEL;
  int count;
  for(count = WIN; count <= CANCEL; count++)
  {
    result = (game_result)count;
    if(result == omit)
    {
      cout << "The game was canclled\n";
    }
    else
    {
      cout << "The game was played";
      if(result == WIN)
        cout << "and we won!";
      if(result == LOSE)
        cout << "and we lost.";
      cout << "\n";
    }
  }
  return 0;
}
