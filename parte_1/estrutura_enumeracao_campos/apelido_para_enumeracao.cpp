#include<iostream>
using std::cin, std::cout, std::endl;

struct Eletrodomestico
{
    enum class Alimentacao { T110V = 110, T220V = 220 };

    Alimentacao tensaoDeAlimentacao;

    char nome[20], marca[20], modelo[20];
    double potenciaDeConsumo;
};


int main()
{
    using Tensao = Eletrodomestico::Alimentacao;

    auto objetoGeladeira = Eletrodomestico{ Tensao::T220V,"Geladeira","Consul","FrostFreeYBr",43.5 };
}
