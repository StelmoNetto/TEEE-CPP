#include "incremento_unario_pre_fixado.h"

#include <iostream>
#include <numeric>
#include <cmath>
using std::cout, std::endl, std::cin;

int main()
{
    using namespace Classes;

    UmaClasse a{ 3 };

    cout << "a = " << a << endl;

    cout << "++a = " << ++a << endl; //Saída para objeto ou conversão será vista a seguir
}
