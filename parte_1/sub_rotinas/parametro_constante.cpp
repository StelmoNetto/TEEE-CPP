#include<iostream>
using std::cin, std::cout, std::endl;

void exibir(const double& parametro)
{
	parametro = 1.4f; //Erro: protege alterações
	cout << "Parâmetro = " << parametro << endl;
}

int main()
{
	double peso = 3.2;

	exibir(peso);
}
