#include<iostream>
using std::cin, std::cout, std::endl;

int main()
{
    auto emProcessamento = [NUMERO_MAXIMO_DE_ITERACOES = 5] (size_t numeroDeIteracoes) { return numeroDeIteracoes < NUMERO_MAXIMO_DE_ITERACOES; };

    for(int i{}; emProcessamento(i); i++)
      cout << i << endl;
}
