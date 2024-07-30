#include <iostream>
using namespace std;

struct Base
{
  void print()
  {
    cout << "Base structure" << endl;
  }
};

struct Derived : Base
{
  void print1()
  {
    cout << "Derived structure" << endl;
  }
};

int main()
{
  Derived *d = new Derived;
  d->print();
  d->print1();

  delete d;
  return 0;
}