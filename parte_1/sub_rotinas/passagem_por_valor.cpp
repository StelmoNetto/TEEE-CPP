#include<iostream>
using std::cin, std::cout, std::endl;

void exibeMensagemDeErro(int tipoDoErro) //Declaração.
{
  switch (tipoDoErro)
  {
    case 0:
    case 1:
      cout << "Um erro de leitura ocorreu\n";
    break;
    default:
      cout << "Um erro inesperado ocorreu\n";
  }
}

int main()
{
	exibeMensagemDeErro(0); //Chamada do procedimento.
}
