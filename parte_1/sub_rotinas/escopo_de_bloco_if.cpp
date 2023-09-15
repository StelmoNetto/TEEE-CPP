#include<iostream>
using std::cin, std::cout, std::endl;

int main()
{
	int i{ 2 };

	if (i > 0)
		int variavelLocalAoIF{ 3 };

	//Esse programa não executará propositalmente
	cout << "Não exibirá o valor de variavelLocalAoIF " << variavelLocalAoIF << endl;
}
