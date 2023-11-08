#include "literal_cozido_cadeia_de_resistencia_ohmica.h"

#include <iostream>
using std::cout, std::endl, std::cin;

int main()
{
    using namespace Classes;

    auto resistencia{ "marrom preto preto prata"_Ohm };

    cout << "Resistência = " << resistencia.valor() << " Ohm" << endl;
}
