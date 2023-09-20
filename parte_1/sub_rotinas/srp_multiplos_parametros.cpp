#include<iostream>
#include<cstdint>
using std::cin, std::cout, std::endl;

const uint8_t FAHRENHEIT = 1;
const uint8_t KELVIN = 2;

//Implementação incorreta: múltiplas responsabilidades
auto converteTemperatura(auto grausCelsius, uint8_t escala)
{
    auto temperaturaConvertida{ grausCelsius };

    if(escala == FAHRENHEIT)
        temperaturaConvertida = grausCelsius * 1.8 + 32.0;

    if(escala == KELVIN)
        temperaturaConvertida = grausCelsius + 273.15;

    return temperaturaConvertida;
}

int main()
{
    auto temperaturaEmGrausCelsius{ 37.0 };

    cout << converteTemperatura(temperaturaEmGrausCelsius, FAHRENHEIT) << " °F\n";
}
