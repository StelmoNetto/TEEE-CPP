#include "derivada_usando_membro_protegido.h"

#include <iostream>
#include <memory>

using std::cout, std::endl;

int main()
{
  using namespace Heranca;

  Derivada objDeDerivada{ 2.3,3 };

  Base objDaBase = objDeDerivada; //Slicing ou fatiamento - objeto de Derivada é uma Base
  cout << "Versao de processamento na classe Base: " << objDaBase.processamento() << endl;

  Base& refBase = objDeDerivada; //Upcasting
  cout << "Versao de processamento na classe Derivada: " << refBase.processamento() << endl; //Não funciona apropriadamente se o método não for virtual

  Base* ptrBase = new Derivada{ 2.3,3 }; //Upcasting
  cout << "Versao de processamento na classe Derivada: " << ptrBase->processamento() << endl;

  std::unique_ptr<Base> smartPtrBase{ std::make_unique<Derivada>(2.3,3) }; //Upcasting
  cout << "Versao de processamento na classe Derivada: " << smartPtrBase->processamento() << endl;

  Derivada& refDer = dynamic_cast<Derivada&>(refBase); //Ok!

  Derivada* ptrDer = dynamic_cast<Derivada*>(ptrBase); //Ok!

  if (ptrDer) { /*Acesso aos métodos de Derivada*/ }
}
