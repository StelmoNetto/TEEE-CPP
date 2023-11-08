#include "conversao_de_tipo.h"

#include <iostream>
#include <numeric>
#include <cmath>
using std::cout, std::endl, std::cin;

int main()
{
    using namespace Classes;

    UmaClasse a{ 3 };

    cout << "Valor(a) = " << a << "\n"; //a é avaliado como um inteiro

    cout << "Bool(a) = " << static_cast<bool> (a) << "\n";
}
