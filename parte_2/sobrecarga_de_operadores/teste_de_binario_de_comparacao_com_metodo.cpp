#include "binario_de_comparacao_com_metodo.h"

#include <iostream>
using std::cout, std::endl, std::cin;

int main()
{
    using namespace Classes;

    UmaClasse a{ 3 };

    cout << "a == 3 = " << std::boolalpha << (a == 3) << endl;

    cout << "2 == a = " << std::boolalpha <<  (2 == a) << endl; //O compilador reescreve como a == 2

    cout << "2 != a = " << std::boolalpha <<  (2 != a) << endl; //O compilador automaticamente insere
}
