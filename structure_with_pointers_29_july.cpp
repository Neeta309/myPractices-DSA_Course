#include <iostream>
using namespace std;

struct Point
{
  int x;
  int y;
};

int main()
{
  Point *p1 = new Point;
  p1->x = 10;
  p1->y = 20;

  cout << p1->x << ", " << p1->y << endl;

  delete p1;
  return 0;
}