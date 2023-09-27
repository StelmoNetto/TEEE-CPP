#include<iostream>
using std::cin, std::cout, std::endl;

constexpr auto limpaBitAtivoMaisDireita(unsigned int n) { return n & (n - 1); };

int main()
{
    unsigned int n;
    cout << "Entre com um número para limpar o bit ativo mais à direita\n";
    cin >> n;

    auto resultado = limpaBitAtivoMaisDireita(n);

    cout << resultado;
}
