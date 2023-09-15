#include<iostream>
#include<cstdlib>
using std::cin,std::cout, std::endl;

void exibeMensagemDeErro(); //Declaração da assinatura

int main()
{
    exibeMensagemDeErro(); //Chamada
}

void exibeMensagemDeErro()
{ //Definição do corpo
    cout << "Um erro ocorreu\n";
    std::exit(EXIT_FAILURE); //Da biblioteca cstdlib
}
