#include <iostream>
#include <cstring>
#include <complex>
using std::cout, std::endl, std::cin;

std::complex<double> operator"" _i(const char* imaginario)
{
    auto parteImaginaria{ std::stod(imaginario) };

    return { 0.0,parteImaginaria };
}

int main()
{
    auto numeroImaginario{ 2.1_i }; //Literal não-cadeia

    cout << "Parte imaginaria = " << numeroImaginario << endl;
}
