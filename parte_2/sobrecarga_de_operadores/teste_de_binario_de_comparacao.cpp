#include "binario_de_comparacao.h"

#include <iostream>
using std::cout, std::endl, std::cin;

int main()
{
    using namespace Classes;

    UmaClasse a{ 3 }, b{ 1 };

    cout << "a == b = " << a.obterDado() << " == " << b.obterDado() << std::boolalpha << " = " << (a == b) << endl;
}
