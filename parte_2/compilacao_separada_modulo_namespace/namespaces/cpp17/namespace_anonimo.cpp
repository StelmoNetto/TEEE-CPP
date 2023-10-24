#include <iostream>

namespace //Agrupa funções de ajuda restritas ao uso classe
{
  void funcaoOculta() { std::cout << "Uso local\n"; }
}

namespace N1
{
  void funcao()
  {
    funcaoOculta(); //Uso apenas dentro do arquivo de implementação .cpp
  }
}

int main()
{
    N1::funcao();
}
