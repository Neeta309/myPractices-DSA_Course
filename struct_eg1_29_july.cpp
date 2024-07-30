#include <iostream>
using namespace std;

struct Point
{
  int x;
  int y;
};

int main()
{
  Point p1;
  Point p2 = {30, 40};

  p1.x = 10;
  p1.y = 20;

  cout << "Point p1: (" << p1.x << ", " << p1.y << ")\n";
  cout << p2.x << " " << p2.y;
}