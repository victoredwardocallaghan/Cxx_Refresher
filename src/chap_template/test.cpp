// Copyright © 2014 Edward O'Callaghan. All Rights Reserved.
// See LICENSE file.

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <string>
using std::string;

#include "stack.hxx"

int main()
{
  Stack<int> mystack;

  mystack.push(5);
  mystack.push(6);

  cout << mystack.pop() << endl;
  cout << mystack.pop() << endl;
}
