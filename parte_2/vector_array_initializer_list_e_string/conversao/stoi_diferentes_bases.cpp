#include <iostream>
#include <string>
using std::string, std::cout, std::endl;
using namespace std::string_literals;

int main()
{
    string str_dec = "0xF";

    int i_dec = stoi(str_dec, nullptr, 0);

    cout << i_dec << endl;


    str_dec = "010";

    i_dec = stoi(str_dec, nullptr, 0);

    cout << i_dec << endl;    


    str_dec = "10";

    i_dec = stoi(str_dec, nullptr, 0);

    cout << i_dec << endl;        
}