#include <vector>
#include <algorithm>
int get7()
{
  // throw 100;
  return 7;
}

struct A {
  int i = 7;
  A operator+(const A& r)const
  {
    return A{ this->i + r.i };
  }
};
//TODO hello
template <class T>
T foo(T t)noexcept
{
  int k;
  return t + t;
}
const int n = get7();
char* f()
{
  if (true)
  {
    return 0;
  }
  return 0;
}

int main()noexcept
{
  int a[] = { 1,2 };
  std::vector<int> v{ 3 };
  std::sort(v.begin(), v.end(), 4);
  std::find_if(v.begin(), v.end(), [](auto) {return true; });
  A aV;
  foo(aV);

  int j;
  int k;
  foo(5);
  constexpr char x = 100;
  return  j + k + foo(3);
}
