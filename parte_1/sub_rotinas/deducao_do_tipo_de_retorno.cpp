#include<iostream>
using std::cin, std::cout, std::endl;

const int x = 1;

decltype(auto) f() { return x; } //Retorno const int, o mesmo que decltype(x)

auto f2() { return x; } //Retorno int. Ver 1

const auto& f3() { return x; } //Retorna const int&. Ver 1

auto& f4() { return x; } //Retorna const int&. Ver 2

int main()
{
	auto y = f(); // int. Ver 1

	decltype(f()) j = f(); // int

	decltype(f2()) t = f2(); // int

	decltype(f3()) k = f3(); // const int&

	auto& z = f4(); // const int&

	z = 2; //Erro aqui, pois z é const int&
}
