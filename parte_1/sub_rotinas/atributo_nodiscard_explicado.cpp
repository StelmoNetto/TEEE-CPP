#include<iostream>
using std::cin, std::cout, std::endl;

const int ERRO = 1;

[[nodiscard("Nao ignore o valor retornado")]] int codigoDeErro(); //Apenas na assinatura

int main()
{
	 codigoDeErro(); //Um aviso é dado ao ignorar o valor retornado
}

int codigoDeErro() { return ERRO; }
