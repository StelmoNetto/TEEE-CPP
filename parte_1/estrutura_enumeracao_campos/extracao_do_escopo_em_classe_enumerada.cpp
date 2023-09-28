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
    using enum Eletrodomestico::Alimentacao;

    auto objetoFogao = Eletrodomestico{ T220V,"Fogao","Brastemp","Foguinho",8.2 };
}
