module Derivada;

import <iostream>;
using std::cout;

namespace Heranca
{
 namespace Estendendo
 {
  inline namespace Sintaxe
  {
    Derivada::Derivada() : novoMembro{0.0} { cout << "Construtor padrao da classe derivada\n"; }

    Derivada::Derivada(double valor, int valDeMembro) : Base{ valDeMembro }, novoMembro{ valor }
    {
      cout << "Construtor da classe derivada\n";
    }

    double Derivada::novoMetodo() const { return obterMembro() * novoMembro; }
  } //Fim de Sintaxe
 } //Fim de Estendendo
} //Fim de Heranca
