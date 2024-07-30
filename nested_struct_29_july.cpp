#include <iostream>

struct Point
{
  int x;
  int y;
};

struct Rectangle
{
  Point topLeft;
  Point bottomRight;
};

int main()
{
  Rectangle rect = {{10, 20}, {30, 40}};
  std::cout << rect.topLeft.x << ", " << rect.topLeft.y << std::endl
            << rect.bottomRight.x << ", " << rect.bottomRight.y << std::endl;

  return 0;
}