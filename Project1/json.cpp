#include <iostream>
#include <string>
int main()
{
  std::string s(R"({
"employees": [
{ "firstName":"Bill" , "lastName":"Gates" },
{ "firstName":"George" , "lastName":"Bush" },
{ "firstName":"Thomas" , "lastName":"Carter" }
]
})");
  std::string sb(R"({world"""""")");
  constexpr int i = 25;
  constexpr int j = i;
  return 0;


}