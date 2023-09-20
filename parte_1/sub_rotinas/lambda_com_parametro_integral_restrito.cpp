#include<iostream>
using std::cin, std::cout, std::endl;

int main()
{
    auto funcao = []<typename T>(const T& parametro1, const T& parametro2) requires std::integral<T>{};

    funcao(1,2); //Ambos os parâmetros int

    funcao(1,2.0); //Erro: requer parâmetros int
}
