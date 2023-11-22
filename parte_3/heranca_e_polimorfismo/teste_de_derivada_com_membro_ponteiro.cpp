#include "derivada_com_membro_ponteiro.h"

#include <iostream>
using std::cout, std::endl;

int main()
{
  Derivada a{ 2.3,3 };
  Derivada b{ a };
  Derivada c{1.0, 1}; //Apenas um elemento

  c = b; //Irá receber três

  b = std::move(a);

  cout << "Valor de membro de Base = " << a.obterMembro() << endl;
  cout << "Valor de membro de Derivada = " << (a.obterNovoMembro() != nullptr) << endl;

  Derivada d{ std::move(b) };
  cout << "Valor de membro de Base = " << d.obterMembro() << endl;
  cout << "Valor de membro de Derivada = " << (d.obterNovoMembro() != nullptr) << endl;
}
