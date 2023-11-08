#include "literal_cozido_numerico_de_resistencia_ohmica.h"

#include <iostream>
using std::cout, std::endl, std::cin;

int main()
{
    using namespace Classes;

    auto resistencia{ 2.0_Ohm };

    cout << "Resistência = " << resistencia.valor() << " Ohm" << endl;
}
