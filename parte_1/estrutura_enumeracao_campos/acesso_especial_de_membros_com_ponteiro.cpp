#include<iostream>
using std::cin, std::cout, std::endl;

constexpr int NUMERO_DE_NOTAS = 3;

struct NotasEscolares
{
    //Declaração dos membros
    char nome[50];
    float notas[NUMERO_DE_NOTAS];
};

int main()
{
    NotasEscolares* ponteiroParaEstrutura = new NotasEscolares;

    cout << "Entre com o nome\n";
    cin >> ponteiroParaEstrutura->nome; //Acesso aos membros utilizando seta (->)
    cout << ponteiroParaEstrutura->nome << endl;

    cout << "Entre com o nome\n";
    cin >> (*ponteiroParaEstrutura).nome; //A desreferenciação permite o acesso com (.)
    cout << ponteiroParaEstrutura->nome << endl;
}
