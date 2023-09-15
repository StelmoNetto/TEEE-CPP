#include<iostream>
using std::cin, std::cout, std::endl;

void exibeSoma(float primeiroOperando, float segundoOperando) //Declaração com 2 parâmetros
{
	cout << primeiroOperando << " + " << segundoOperando << " = " << primeiroOperando + segundoOperando << endl;
}

int main()
{
  float segundoParamentroAtual = 12.4;
  exibeSoma(12.1, segundoParamentroAtual); //Chamada do procedimento.
}
