#include <iostream>
using namespace std;

struct Eletrodomestico
{
    enum class Alimentacao { T110V = 110, T220V = 220 };
    Alimentacao tensaoDeAlimentacao;
    char nome[20], marca[20], modelo[20];
    double potenciaDeConsumo;

    void inserirDados() { cout << "Entre com o nome\n"; cin >> nome; } //Método definido no registro
    void exibeDados() const; //Apenas a assinatura do método
};

void Eletrodomestico::exibeDados() const //Método definido fora do registro
{
    cout << "Nome " << nome << endl;
    cout << "Marca " << marca << endl;
    cout << "Modelo " << modelo << endl;
}

int main()
{
    auto eletrodomestico = Eletrodomestico{ Eletrodomestico::Alimentacao::T220V,"geladeira","Consul","FrostFreeYBr",43.5 };

    eletrodomestico.exibeDados();
}
