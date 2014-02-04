// Copyright © 2014 Edward O'Callaghan. All Rights Reserved.
// See LICENSE file.

#ifndef STACK_H
#define STACK_H
// vector based generic stack implementation

#include <stdexcept>
using std::runtime_error;
using std::underflow_error;

#include <vector>
using std::vector;

template <class T>
class Stack
{
private:
  vector<T> stackd;

public:
  Stack() {};
  ~Stack() {};
  void push(T d);
  T pop();
  bool isEmpty();
};

template <class T>
void Stack<T>::push(T d)
{
  stackd.push_back(d);
}

template <class T>
T Stack<T>::pop()
{
  try
  {
    if(stackd.empty()) throw underflow_error("stack empty.");
    return stackd[0]; // XXX: fix this up later..
  }
  catch (underflow_error) {
    //
  }
}

template <class T>
bool Stack<T>::isEmpty()
{
  return stackd.empty();
}

#endif // STACK_H
