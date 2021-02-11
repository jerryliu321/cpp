// Begin of point.h
class Point
{
  public:
    Point(float xx=0, float yy = 0) {X=xx; Y=yy;}
    float GetX() {return X;}
    float GetY() {return Y;}
    friend float linefit(Point l_point[], int n_point);
  private:
    float X, Y;
};
// End of point.h
