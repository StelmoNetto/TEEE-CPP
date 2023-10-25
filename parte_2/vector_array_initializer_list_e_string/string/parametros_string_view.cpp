#include <iostream>
#include <string>
#include <string_view>
using std::string, std::string_view, std::cout, std::endl;
using namespace std::string_literals;

string_view concatenaStrings(string_view str1, string_view str2) //O correto é retornar uma string. Só foi possível por str ser estático.
{
  static string str{ str1 };
  str.append(str2);
  return str;
}

int main()
{
  auto str2 = "Uma String"s;
  std::string str3{ " com outra" };

  auto concStr = concatenaStrings(str2, str3);
  cout << concStr << endl;
}
