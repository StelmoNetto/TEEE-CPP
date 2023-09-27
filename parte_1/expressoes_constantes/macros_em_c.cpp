//Programa com Macros em Linguagem C
#include<iostream>
using std::cin, std::cout, std::endl;

#define LSB 1
#define LIMPAR_BIT_ATIVO_MAIS_DIREITA(n) (n & (n - 1))

int main()
{
    cout << LIMPAR_BIT_ATIVO_MAIS_DIREITA(LSB);
}
