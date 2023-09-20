#include<iostream>
using std::cin, std::cout, std::endl;

using inteiro = long long int;
const inteiro ERRO_ENTRADA_NEGATIVA{ 1 };

inteiro fatorial(inteiro n)
{
    if (n < 0)
    {
        cout << "Entrada n < 0\n";
        return ERRO_ENTRADA_NEGATIVA;
    }

    auto fatorialDeN{ 1LL };

    for (inteiro i = 2; i <= n; i++)
        fatorialDeN *= i;
    return fatorialDeN;
}

int main()
{
    auto numero{ -3L };

    auto fatorialDeNumero{ fatorial(numero) };

    if(fatorialDeNumero != ERRO_ENTRADA_NEGATIVA)
        std::cout << fatorialDeNumero << std::endl;
}
