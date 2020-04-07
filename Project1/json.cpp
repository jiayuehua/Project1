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
  std::string sb(R"("we are the"world")");
  const int i = 2;
  const int j = i;
  return 0;


}