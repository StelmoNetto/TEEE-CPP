#include <iostream>
#include <string>
using std::string, std::cout, std::endl;
using namespace std::string_literals;

int main()
{
    string str = "Nos pensamos generalidade, mas vivemos em detalhes.";

    string str2 = str.substr(4, 8);

    cout << str2 << "\n";
}
