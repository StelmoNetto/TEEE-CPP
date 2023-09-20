#include <iostream>
#include <numbers>

using std::cin, std::cout, std::endl;
using namespace std::numbers;

float anguloRetoEmGraus()
{
	return 90.0f;
}

float emRadianos(float graus)
{
	return graus * pi / 180.0f;
}

int main()
{
	//Desejo usar essa entrada
	auto anguloEmGraus{ 45.0f };

	//Fica independente da origem do ângulo em graus
	auto x_rad = emRadianos(anguloEmGraus);

	//Desejo usar o ângulo retornado
	anguloEmGraus = anguloRetoEmGraus();

	//Sem problema!
	x_rad = emRadianos(anguloEmGraus);

	//Mesmo se a entrada originar-se do teclado
	cout << "Entre com o angulo em graus\n";
	cin >> anguloEmGraus;
	x_rad = emRadianos(anguloEmGraus);
}
