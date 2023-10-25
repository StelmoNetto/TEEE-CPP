#include <iostream>
#include <string>
#include <vector>
#include <functional>
using std::vector, std::string, std::cout, std::endl;

int main()
{
  string str1{ "s1" }, str2{ "s2" };

  vector< std::reference_wrapper<string> > strings{ ref(str1) }; //ou: strings{ str1 };

  strings.push_back(ref(str2)); //ou: strings.push_back(str2);

  cout << strings[0].get() << endl;
}
