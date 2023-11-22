#include "derivada_com_metodo_final.h"

#include <iostream>

using std::cout, std::endl;

int main()
{
    Derivada objetoDeDerivada;

    Base& objetoDeBase = objetoDeDerivada;

    cout << "Mesmo resultado? = " << std::boolalpha << (objetoDeDerivada.processamento() == objetoDeBase.processamento());
}
