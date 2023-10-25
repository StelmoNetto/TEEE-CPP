#include <iostream>
#include <string>
using std::string, std::cout, std::endl;
using namespace std::string_literals;

int main()
{
    auto si = std::to_string(42);

    cout << si.c_str() << endl;
}
