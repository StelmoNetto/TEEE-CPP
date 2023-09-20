#include <iostream>
#include <numbers>

using std::cin, std::cout, std::endl;
using namespace std::numbers;

template<typename T>
auto anguloRetoEmGraus()
{
	return T { 90.0 };
}

auto emRadianos(auto graus)
{
	return graus * pi / 180.0;
}

int main()
{
	//Desejo usar essa entrada
	auto anguloEmGraus{ 45.0f };

	//Fica independente da origem do ângulo em graus
	auto x_rad = emRadianos(anguloEmGraus);

	//Desejo usar o ângulo retornado
	anguloEmGraus = anguloRetoEmGraus<float>();

	//Sem problema!
	x_rad = emRadianos(anguloEmGraus);

	//Mesmo se a entrada originar-se do teclado
	cout << "Entre com o angulo em graus\n";
	cin >> anguloEmGraus;
	x_rad = emRadianos(anguloEmGraus);
}
