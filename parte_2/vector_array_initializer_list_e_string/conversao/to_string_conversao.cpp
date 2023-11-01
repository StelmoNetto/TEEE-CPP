#include <iostream>
#include <string>
using std::string, std::cout, std::endl;
using namespace std::string_literals;

int main()
{
    auto si = std::to_string(42);
    cout << si.c_str() << endl;

    si = std::to_string(0b10);
    cout << si.c_str() << endl;    

    si = std::to_string(042);
    cout << si.c_str() << endl;    

    si = std::to_string(0x42);
    cout << si.c_str() << endl;

    auto sd = std::to_string(42.1);
    cout << sd.c_str() << endl;        
}