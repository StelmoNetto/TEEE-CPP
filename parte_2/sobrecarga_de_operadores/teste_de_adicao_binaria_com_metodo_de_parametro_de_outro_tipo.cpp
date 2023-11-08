#include "adicao_binaria_com_metodo_de_parametro_de_outro_tipo.h"

#include <iostream>
using std::cout, std::endl, std::cin;

int main()
{
    using namespace Classes;

    UmaClasse a{ 3 };

    UmaClasse r = a + 1;

    cout << "a + 1 = " << r.obterDado() << "\n";
}
