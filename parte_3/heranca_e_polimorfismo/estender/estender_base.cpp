#include "estender_base.h"

#include <iostream>
using std::cout, std::endl, std::cin;

namespace Heranca
{
 namespace Estendendo
 {
  inline namespace Sintaxe
  {
    Base::Base(int valor) : membro{valor} { cout << "Construtor da classe base\n";  }

    void Base::alterarMembro(int valor) { membro = valor; }

    int Base::obterMembro() const { return membro; }

    double Base::processamento() const { return 2.0 * membro; }
  } //Fim de Sintaxe
 } //Fim de Estendendo
} //Fim de Heranca
