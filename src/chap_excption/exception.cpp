// Copyright © 2014 Edward O'Callaghan. All Rights Reserved.
// See LICENSE file.

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <string>
using std::string;

#include <stdexcept>
using std::runtime_error;

int main()
{
  int x,y,z = 0;

  cin >> x >> y;
  try
  {
    if(y==0) throw runtime_error("zero division");
    z = (x/y);
  }
  catch (runtime_error err) {
    while(y == 0)
    {
      cout << "second argument is zero, re-entry non-zero value: ";
      cin >> y;
      cout << endl;
    }
    z = (x/y);
  }
  cout << z << endl;
}
