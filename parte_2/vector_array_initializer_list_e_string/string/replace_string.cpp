#include <iostream>
#include <string>
using std::string, std::cout, std::endl;
using namespace std::string_literals;

int main()
{
    string str = "Esta e uma string teste.";
    string str2 = "exemplo";

    str.replace(18, 5, str2);
    cout << str << '\n';
}
