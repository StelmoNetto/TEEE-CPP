#include<iostream>
using std::cin, std::cout, std::endl;

void novaFuncao() {}

[[deprecated("Funcao insegura. Por favor, use novaFuncao")]] void funcaoDeprecada() {}

int main()
{
    funcaoDeprecada();
}
