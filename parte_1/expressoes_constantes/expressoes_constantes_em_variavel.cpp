#include<iostream>
using std::cin, std::cout, std::endl;

constexpr unsigned int LSB{ 1 };
constexpr auto limpaBitAtivoMaisDireita(unsigned int n) { return n & (n - 1); };

int main()
{
    cout << limpaBitAtivoMaisDireita(LSB) << endl; //tempo de compilação;

    constexpr auto resultadoDaExpressao{ LSB + LSB };
    cout << limpaBitAtivoMaisDireita(resultadoDaExpressao); //tempo de compilação;
}
