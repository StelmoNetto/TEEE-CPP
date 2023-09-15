#include<iostream>
using std::cin, std::cout, std::endl;

auto fatorial(int n)
{
	long double fatorialDeN{ 1.0L };

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
	cout << std::fixed << numero << "!= " << fatorial(numero);
}
