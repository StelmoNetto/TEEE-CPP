#include "adicao_binaria_de_contracao.h"

#include <iostream>
using std::cout, std::endl, std::cin;

int main()
{
    using namespace Classes;

    UmaClasse a{ 3 }, b{ 1 };

    a += b;

    cout<<"a = " << a.obterDado() << "\n";
}
