#include "estender_derivada.h"

#include <iostream>
using std::cout, std::endl, std::cin;

namespace Heranca
{
 namespace Estendendo
 {
  inline namespace Sintaxe
  {
    Derivada::Derivada() : novoMembro{0.0} //Chamada implícita do construtor da classe base primeiro, seguido desse construtor da classe derivada.
    {
      cout << "Construtor padrao da classe derivada\n";
    }

    Derivada::Derivada(double valor, int valorDaBase) : Base{ valorDaBase }, novoMembro{ valor } //Chamada explícita do construtor da classe base primeiro
    {
      cout << "Construtor da classe derivada\n";
    }

    double Derivada::novoMetodo() const { return obterMembro() * novoMembro; } //Acesso a membro privado da classe base somente através da interface
  } //Fim de Sintaxe
 } //Fim de Estendendo
} //Fim de Heranca
