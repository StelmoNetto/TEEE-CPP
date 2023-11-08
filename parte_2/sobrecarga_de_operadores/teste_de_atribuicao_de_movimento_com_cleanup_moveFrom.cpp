#include "atribuicao_de_movimento_com_cleanup_moveFrom.h"

#include <iostream>
using std::cout, std::endl, std::cin;

int main()
{
    using namespace Classes;

    UmaClasse a{ 3 }, b{ 2 };

    a = std::move(b);

    cout << "a = " << a.obterDado() << endl;
    cout << "b = " << b.obterDado() << endl;
}
