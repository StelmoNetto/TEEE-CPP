#include<iostream>
using std::cin, std::cout, std::endl;

consteval double quadrado(double valor) { return valor * valor; }

constexpr auto valor{ 2.5 };

int main()
{
    constexpr auto quadradoDeValor{ quadrado(valor) };

    cout << valor << "² = " << quadradoDeValor;
}
