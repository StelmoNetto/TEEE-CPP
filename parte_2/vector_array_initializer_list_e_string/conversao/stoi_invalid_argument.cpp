#include <iostream>
#include <string>
using std::string, std::cout, std::endl;
using namespace std::string_literals;

int main()
{
    string str_dec = ", A Space Odyssey";
    string::size_type sz;

    int i_dec = stoi(str_dec, &sz);

    cout << str_dec << ": " << i_dec << " and [" << str_dec.substr(sz) << "]\n";
}