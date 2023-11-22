#include "base_com_membro_protegido.h"

#include <iostream>
using std::cout;

namespace Heranca
{
    Base::Base() : membro{ 0 } { cout << "Construtor padrao da classe base\n";  }

    Base::Base(int valor) : membro{valor} { cout << "Construtor da classe base\n";  }

    void Base::alterarMembro(int valor) { membro = valor; }

    int Base::obterMembro() const { return membro; }

    double Base::processamento() const { return 2.0 * membro; }
} //Fim de Heranca
