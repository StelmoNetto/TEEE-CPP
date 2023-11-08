#include "atribuicao_de_copia_de_membro_vetor.h"

#include <iostream>
using std::cout, std::endl, std::cin;

int main()
{
    using namespace Classes;

    UmaClasse obj1, obj2{ 2,1,4 }, obj3{ 3,0 };

    obj1 = obj2;

    cout << "obj1 = ";
    obj1.exibirDados();
    cout << endl;

    obj1 = obj2 = obj3;

    cout << "obj1 = ";
    obj1.exibirDados();
    cout << endl;

    cout << "obj2 = ";
    obj2.exibirDados();
    cout << endl;

    cout << "obj3 = ";
    obj3.exibirDados();
    cout << endl;
}
