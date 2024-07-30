#include <iostream>
using namespace std;

struct Base
{
  int value;

  Base(int v) : value(v) {}
};

struct Derived : Base
{
  Derived(int v) : Base(v) {}

  void display()
  {
    cout << "Value: " << value << endl;
  }
};

int main()
{
  Derived *d1 = new Derived(10);
  d1->display();
  delete d1;

  return 0;
}