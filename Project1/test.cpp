#include <iostream>
#include <vector>
int foo()
{
  int k;
  return k + 100;
}
//TODO: hello
const int hello = 40 * foo();
int* getItem(const std::vector<int>& v)
{
  int* ret;
  if (v.size() > 4)
  {
    *ret = 0;
  }
  return 0;
}

