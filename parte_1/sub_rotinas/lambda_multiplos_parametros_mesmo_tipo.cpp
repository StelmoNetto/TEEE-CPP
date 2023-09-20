#include<iostream>
using std::cin, std::cout, std::endl;

int main()
{
    auto funcao = []<typename T>(const T& parametro1, const T& parametro2) {};

    funcao(1,2); //Ambos os parâmetros int
}
