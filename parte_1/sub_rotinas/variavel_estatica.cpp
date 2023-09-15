#include<iostream>
using std::cin, std::cout, std::endl;

void procedimentoComVarEstatica()
{
  static int variavelEstatica = 0;
  cout << "Valor da variavel estática = " << variavelEstatica++ << endl;
}

void procedimentoComVarNormal()
{
  int var = 0;
  cout << "Valor da variavel normal = " << var++ << endl;
}

int main()
{
  cout << "Exemplo de variavel estatica local:\n";
  procedimentoComVarEstatica();
  procedimentoComVarEstatica();
  procedimentoComVarEstatica();

  cout << "Exemplo de variavel normal local:\n";
  procedimentoComVarNormal();
  procedimentoComVarNormal();
  procedimentoComVarNormal();
}
