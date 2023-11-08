#include "conversao_em_ponteiro.h"

#include <iostream>
#include <numeric>
#include <cmath>
using std::cout, std::endl, std::cin;

int main()
{
    using namespace Classes;

    UmaClasse a{ 3 };

    if (a != nullptr) cout << "Não é nullptr\n";

    if (a) cout << "Não é nullptr\n";

    if (!a) cout << "É nullptr\n";
}
