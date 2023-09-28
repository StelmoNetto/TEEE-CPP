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
    NotasEscolares notasDeMatematica = {"Fulano", {10.0, 8, 7}}, notasDeQuimica;

    notasDeQuimica = notasDeMatematica; //Os membros apresentam os mesmo valores

    notasDeMatematica.notas[0] = 5.0F;

    //Mesmos valores de antes da alteração da 1ª nota
    cout << "O aluno " << notasDeQuimica.nome << endl;
    for (int j = 0; j < NUMERO_DE_NOTAS; ++j)
    {
        cout << notasDeQuimica.notas[j] << " ";
    }
}
