#include "binario_de_comparacao_de_nave_espacial.h"

#include <iostream>
using std::cout, std::endl, std::cin;

int main()
{
    using namespace Classes;

    UmaClasse a{ 3 };

    cout << "a == 3 = " << std::boolalpha << (a == 3) << endl;

    cout << "a < 2 = " << std::boolalpha <<  (a < 2) << endl; //Automaticamente definido pelo compilador
}
