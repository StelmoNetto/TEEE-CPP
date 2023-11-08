#include "unario_de_negacao.h"

#include <iostream>
using std::cout, std::endl, std::cin;

int main()
{
    using namespace Classes;

    UmaClasse a{ 3 };

    cout << "!a = " << !a << "\n"; //Complemento do valor do membroAlocado em a
}
