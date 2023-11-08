#include "conversao_de_tipo_com_auto.h"

#include <iostream>
#include <numeric>
#include <cmath>
using std::cout, std::endl, std::cin;

int main()
{
    using namespace Classes;

    UmaClasse a{ 3 };

    int i{ static_cast<int> (a) }; //Conversão explícita para um inteiro

    cout << "a = " << i << endl;

    float f = a; //float f{ a }; não permitida

    cout << "a = " << f << endl;
}
