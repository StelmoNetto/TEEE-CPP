#include <iostream>
using std::cin,std::cout, std::endl;

int main()
{
	float consumoDeCombustivelEmKmPorL;
	auto distanciaPercorridaEmKm{ 2.5f };
	auto volumeDeCombustivelEmL{ -15.1f }; //Entrada inválida

	bool distanciaValida = distanciaPercorridaEmKm >= 0;
	bool volumeValido = volumeDeCombustivelEmL > 0;
	bool todasEntradasValidas = distanciaValida && volumeValido;

	if (!todasEntradasValidas) //Facilita a leitura
	{
		cout << "Consumo de combustivel nao pode ser aferido para as entradas informadas\n";
		return 1;
	}

	//O cálculo só será realizado se todas as entradas estiverem corretas
	consumoDeCombustivelEmKmPorL = distanciaPercorridaEmKm / volumeDeCombustivelEmL;
	cout << "O consumo de combustível = " << consumoDeCombustivelEmKmPorL << " km/l\n";
}
