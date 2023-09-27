#include<iostream>
#include<memory>
using std::cin, std::cout, std::endl;

int main()
{
    auto limpaBitAtivoMaisDireita = [](int n) constexpr { return n & (n - 1); };

    constexpr auto resultado = limpaBitAtivoMaisDireita(0b1010); //tempo de compilação

    cout << resultado;
}
