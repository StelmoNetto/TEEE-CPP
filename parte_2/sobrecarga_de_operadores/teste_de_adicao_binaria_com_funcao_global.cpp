#include "adicao_binaria_com_funcao_global.h"

#include <iostream>
using std::cout, std::endl, std::cin;

int main()
{
    using namespace Classes;

    UmaClasse a{ 3 }, b{ 1 };

    UmaClasse r = a + b;
    cout << " a + b = " << r.obterDado() << "\n";

    r = a + 1;
    cout << " a + 1 = " << r.obterDado() << "\n";

    r = 1 + a; //Funciona
    cout << " 1 + a = " << r.obterDado() << "\n";
}
