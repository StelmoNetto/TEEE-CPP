#include "LEDIndicador.h"
#include "DriverDeLED.h"

#include<iostream>
#include<cstdint>
using std::cin, std::cout, std::endl;

int main()
{
    LEDIndicador ledDeFuncionamentoDoPainelSolar;

    if(ledDeFuncionamentoDoPainelSolar.emFuncionamento()) 
      ledDeFuncionamentoDoPainelSolar.ligar();
}