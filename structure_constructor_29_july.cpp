#include <iostream>
using namespace std;

struct Point
{
  int x;
  int y;

  Point(int, int);
};

Point::Point(int a, int b) : x(a), y(b) {}

int main()
{
  Point p(10, 20);
  cout << p.x << ", " << p.y << endl;
  return 0;
}

// #include <iostream>
// using namespace std;

// // Define the Point structure
// struct Point
// {
//   int x;
//   int y;

//   // Constructor declaration
//   Point(int a, int b);
// };

// // Define the constructor outside the structure body
// Point::Point(int a, int b) : x(a), y(b) {} // Using initializer list

// int main()
// {
//   Point p(10, 20);
//   cout << p.x << ", " << p.y << endl;
//   return 0;
// }
