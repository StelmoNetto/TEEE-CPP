#include<iostream>
using std::cin, std::cout, std::endl;

void fatorial(int n, int* apontaParaValorDoFatorial)
{
  *apontaParaValorDoFatorial = 1; //Alteração indireta da variável valorDoFatorial.

  for (int i = 2; i <= n; ++i)
    (*apontaParaValorDoFatorial) *= i;
}

int main()
{
  int numero, valorDoFatorial;

  cout<<"Entre com um numero para calcular o fatorial\n";
  cin>>numero;

  fatorial(numero, &valorDoFatorial);

  cout << numero << "!= " << valorDoFatorial <<"\n";
}
