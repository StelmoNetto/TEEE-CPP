#include<iostream>
using std::cin, std::cout, std::endl;

uint64_t fatorial(int n)
{
	uint64_t fatorialDeN{ 1 };

	for (int i{ 2 }; i <= n; ++i)
		fatorialDeN *= i; //Ou fatorialDeN = fatorialDeN * i;

	return fatorialDeN;
}

int main()
{
	int numero;

	cout << "Entre com um numero para calcular numero!\n";
	cin >> numero;

	auto fatorialDeNumero = fatorial(numero);

	cout << numero << "!= " << fatorialDeNumero << endl;
	//Ou
	cout << numero << "!= " << fatorial(numero);
}
