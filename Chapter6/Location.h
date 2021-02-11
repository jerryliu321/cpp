#if! defined(_LOCATION_H)
#define _LOCATION_H
class Location
{
  public:
    Location();
    Location(int xx, int yy);
    ~Location();
    void Move(int x, int y);
    int GetX() {return X;}
    int GetY() {return Y;}
  private:
    int X, Y;
};
#endif

