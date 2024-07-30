#include <iostream>
using namespace std;

struct Point
{
  int x;
  int y;
};

int main()
{
  Point arr[5];

  for (int i = 0; i < 5; i++) // Intialization of array
  {
    arr[i].x = i * 20;
    arr[i].y = i * 40;
  }

  for (int i = 0; i < 5; i++)
  {
    cout << "Point" << i << ": " << arr[i].x << ", " << arr[i].y << endl;
  }

  return 0;
}