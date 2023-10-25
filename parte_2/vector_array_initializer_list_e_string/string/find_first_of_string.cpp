#include <iostream>
#include <string>
using std::string, std::cout, std::endl;
using namespace std::string_literals;

int main()
{
    string str{ "Hello World!" };
    string strDeBusca{ "o" };
    const char* cstrDeBusca = "Good Bye!";

    cout << str.find_first_of(strDeBusca) << '\n';
    cout << str.find_first_of(strDeBusca, 5) << '\n';
    cout << str.find_first_of(cstrDeBusca) << '\n';
    cout << str.find_first_of(cstrDeBusca, 0, 4) << '\n';

    // 'x' não está em "Hello World', então retornará string::npos
    cout << str.find_first_of('x') << '\n';
}
