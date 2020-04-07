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
  int i = 2;
  int j = i;
  return 0;


}