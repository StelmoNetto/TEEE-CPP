#include "desreferenciacao_de_objeto.h"

#include <iostream>
#include <numeric>
#include <cmath>
using std::cout, std::endl, std::cin;

int main()
{
    using namespace Classes;

    UmaClasse objeto;

    cout << "Entre com um valor inteiro\n";

    cin >> objeto;

    cout << "objeto = " << *objeto << "\n";
}
