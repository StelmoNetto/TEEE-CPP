#include<iostream>
using std::cin, std::cout, std::endl;

void fatorial(uint8_t n, uint64_t& fatorialDeN)
{
	fatorialDeN = 1;

	for (int i{ 2 }; i <= n; ++i)
		fatorialDeN *= i; //Ou fatorialDeN = fatorialDeN * i;

	return; //Procedimentos podem retornar nada (void)
}

int main()
{
	int numero;
	uint64_t fatorialDeNumero;

	cout << "Entre com um numero para calcular numero!\n";
	cin >> numero;

	fatorial(numero, fatorialDeNumero);

	cout << numero << "!= " << fatorialDeNumero << endl;
}
