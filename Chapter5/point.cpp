#include"point.h"
Point::Point(Point &p)
{
  X = p.X;
  Y = p.Y;
  countP++;
}

