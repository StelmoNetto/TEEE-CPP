#include<iostream>
using std::cin, std::cout, std::endl;

const int ERRO = 1;

[[nodiscard]] int codigoDeErro() { return ERRO; }

int main()
{
	 codigoDeErro(); //Um aviso é dado ao ignorar o valor retornado
}
