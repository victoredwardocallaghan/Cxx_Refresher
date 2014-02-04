// Copyright © 2014 Edward O'Callaghan. All Rights Reserved.
// See LICENSE file.

#include <iostream>
using std::cout;
using std::endl;

#include <string>
using std::string;

#include <vector>
using std::vector;


int main()
{
  vector<int> v{1,5,9,2,3,5,7,6};

  for(auto &i : v)
    i *= i; // square each element

  for(auto i : v)
    cout << i << ", " ;
  cout << endl;
}
