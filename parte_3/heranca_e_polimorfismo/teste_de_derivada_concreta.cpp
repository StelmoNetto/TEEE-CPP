#include "derivada_concreta.h"

#include <iostream>
using std::cout;

int main()
{
  Base* objeto = new Derivada{ 2.3,2 };

  cout << "etapa1() + etapa2() = 1 + 2 = " << objeto->processamento();

  delete objeto;
}
