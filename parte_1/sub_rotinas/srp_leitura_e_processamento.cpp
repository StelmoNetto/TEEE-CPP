#include <iostream>
#include <numbers>

using std::cin, std::cout, std::endl;
using namespace std::numbers;

float anguloRetoEmGraus()
{
	return 90.0f;
}

//Não sabe-se qual é a entrada, até executar
float radianos()
{
	float anguloEmGraus;

  //Faz entrada
	cout << "Entre com o angulo em graus\n";
	cin >> anguloEmGraus;

  //Junto com o processamento
	auto anguloEmRadianos{ anguloEmGraus * pi / 180.0f };

	return anguloEmRadianos;
}

int main()
{
	//Desejo usar essa entrada
	auto anguloEmGraus{ 45.0f };

	//Mas vou ter que fornecê-la pelo teclado
	auto x_rad = radianos();

	//Desejo usar o ângulo retornado
	anguloEmGraus = anguloRetoEmGraus();

	//Novamente, terei que usar o teclado
	x_rad = radianos();
}
