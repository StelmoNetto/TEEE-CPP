#include "adicao_binaria_com_metodo.h"

#include <iostream>
using std::cout, std::endl, std::cin;

int main()
{
    using namespace Classes;

    UmaClasse a{ 3 }, b{ 1 };

    UmaClasse r = a + b;
    cout << "a + b = " << r.obterDado() << "\n";

    UmaClasse r2 = a + 1; //1 é convertido implicitamente em objeto
    cout << "a + 1 = " << r2.obterDado() << "\n";
}
