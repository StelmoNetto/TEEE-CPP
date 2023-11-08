#include "chamada_de_funcao.h"

#include <iostream>
#include <numeric>
using std::cout, std::endl, std::cin;

int main()
{
    using namespace Classes;

    UmaClasse a{ 3 };

    cout << "a = " << a() << "\n";

    cout << a() << "**2 = "<<a(2) << "\n";
}
