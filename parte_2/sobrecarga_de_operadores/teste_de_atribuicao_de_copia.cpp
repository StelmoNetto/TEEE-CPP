#include "atribuicao_de_copia.h"

#include <iostream>
using std::cout, std::endl, std::cin;

int main()
{
    using namespace Classes;

    UmaClasse obj1, obj2{ 2 }, obj3{ 3 };

    obj1 = obj2;

    cout << "obj1 = " << obj1.obterDado() << endl;

    obj1 = obj2 = obj3;

    cout << "obj1 = " << obj1.obterDado() << endl;
    cout << "obj2 = " << obj2.obterDado() << endl;
    cout << "obj3 = " << obj3.obterDado() << endl;
}
