#include "estender_derivada.h"

#include <iostream>
using std::cout, std::endl, std::cin;

int main()
{
    using namespace Heranca::Estendendo;

    Derivada objDer{}, segObjDer{ 2.3,2 };
    cout << "valor do membro da classe base " << objDer.obterMembro() << "\n"; //Usando a interface da classe base para acessa membro privado classe base
    cout << "valor do membro da classe base " << segObjDer.obterMembro() << "\n";
    cout << "valor obtido da classe derivada " << segObjDer.novoMetodo() << "\n";


    Base objDaBase;
    cout<< "valor do membro da classe base " << objDaBase.obterMembro() << endl;
}
