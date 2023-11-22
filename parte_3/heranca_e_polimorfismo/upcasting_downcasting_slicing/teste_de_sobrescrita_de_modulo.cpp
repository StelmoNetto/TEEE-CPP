#include "derivada_usando_membro_protegido.h"

#include <iostream>
using std::cout, std::endl;

int main()
{
    using namespace Heranca;

    Base objDaBase;
    cout << "Versao de processamento na classe base " << objDaBase.processamento() << endl; //Chamada do método original da classe base

    Derivada objDerivada{ 2.3,3 };
    cout << "valor do membro da classe base " << objDerivada.obterMembro() << "\n";
    cout << "valor do membro da classe derivada " << objDerivada.obterNovoMembro() << "\n";
    cout << "Processamento da classe derivada " << objDerivada.processamento() << "\n"; //Chamada do método redefinido (sobrescrito) da classe base
    cout << "Processamento da classe base " << objDerivada.Base::processamento() << "\n"; //Chamada do método original da classe base
}
