#include <iostream>
using std::cin,std::cout, std::endl;

int main()
{
		const float VELOCIDADE_DE_ATENCAO_KM_POR_H = 55.0;
		const float VELOCIDADE_MAXIMA_KM_POR_H = 80.0;
		float velocidadeKmPorH;

		cout << "Qual a sua velocidade em km/h?\n";
		cin >> velocidadeKmPorH;

		if(velocidadeKmPorH > VELOCIDADE_DE_ATENCAO_KM_POR_H)
		{
			//Só chega aqui caso seja verdadeiro
			if(velocidadeKmPorH > VELOCIDADE_MAXIMA_KM_POR_H)
			{
				cout << "Acima do limite da via!\n";
			}
			else //velocidadeKmPorH <= VELOCIDADE_MAXIMA_KM_POR_H
			{
				cout << "Atenção! Velocidade próxima do limite\n";
			}//termina o 2º if
		}//termina o 1º if
}
