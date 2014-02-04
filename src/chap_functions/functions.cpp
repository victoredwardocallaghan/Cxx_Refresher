// Copyright © 2014 Edward O'Callaghan. All Rights Reserved.
// See LICENSE file.

#include <iostream>
using std::cout;
using std::endl;

int main(int argc, char const* argv[])
{
  // ignore program name at argv[0]
  for(int i=1; i < argc; i++)
    cout << "Arguement #" << i << " : " << argv[i] << endl;

  return 0;
}
