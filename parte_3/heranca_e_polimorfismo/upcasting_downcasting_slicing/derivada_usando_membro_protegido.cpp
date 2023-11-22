#include "derivada_usando_membro_protegido.h"

#include <iostream>
using std::cout;

namespace Heranca
{
    Derivada::Derivada() : novoMembro{0.0} { cout << "Construtor padrao da classe derivada\n"; }

    Derivada::Derivada(double valor, int valDeMembro) : Base{ valDeMembro }, novoMembro{ valor }
    {
      cout << "Construtor da classe derivada\n";
    }

    double Derivada::obterNovoMembro() const { return novoMembro; }

    double Derivada::processamento() const { return novoMembro * membro; }
} //Fim de Heranca
