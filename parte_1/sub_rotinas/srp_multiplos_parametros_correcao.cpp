#include<iostream>
using std::cin, std::cout, std::endl;

auto temperaturaKelvin(auto grausCelsius)
{
    return grausCelsius + 273.15;
}

auto temperaturaFahrenheit(auto grausCelsius)
{
    return grausCelsius * 1.8 + 32.0;
}

int main()
{
    auto temperaturaEmGrausCelsius{ 37.0 };

    cout << temperaturaFahrenheit(temperaturaEmGrausCelsius) << " °F\n";
}
