#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;

int main()
{
  int *p = new int();
  *p = 10;

  cout << *p << endl;
  cout << p << endl;
  delete (p);

  delete[] p;
  p = NULL;
}
