#include <iostream>
#include <string>
using std::string, std::cout, std::endl;
using namespace std::string_literals;

int main()
{
    string orbitas("686.97 365.24");
    string::size_type sz;

    float marte = stof(orbitas, &sz);
    float terra = stof(orbitas.substr(sz));

    cout << "Um ano marciano leva " << (marte / terra) << " anos terrestre.\n";
}
