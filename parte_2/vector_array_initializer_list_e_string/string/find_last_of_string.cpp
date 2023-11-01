#include <iostream>
#include <string>
using std::string, std::cout, std::endl;
using namespace std::string_literals;

int main()
{
    string str{ "c:\\windows\\winhelp.exe" };
    cout << str.find_last_of("/\\")<<'\n';

    string str1{ R"(c:\windows\winhelp.exe)" }; //literal para C-string
    cout << str1.find_last_of(R"(/\)") << '\n';
}
