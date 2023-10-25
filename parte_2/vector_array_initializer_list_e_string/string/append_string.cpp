#include <iostream>
#include <string>
using std::string, std::cout, std::endl;
using namespace std::string_literals;

int main()
{
    string str{ "Uma" };
    str.append(" String");

    cout << str << '\n';
}
