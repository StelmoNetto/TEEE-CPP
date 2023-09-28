#include<iostream>
using std::cin, std::cout, std::endl;

constexpr int NUMERO_DE_ALUNOS = 2;
constexpr int NUMERO_DE_NOTAS = 3;

struct NotasEscolares
{
    //Declaração dos membros
    char nome[50];
    float notas[NUMERO_DE_NOTAS];
};


int main()
{
    NotasEscolares alunos[NUMERO_DE_ALUNOS] {{"Fulano", {10, 8, 9}}, {"Beltrano", {6, 7, 8}}};

    for (int i = 0; i < NUMERO_DE_ALUNOS; ++i)
    {
        cout << "O aluno " << alunos[i].nome << endl;
        for (int j = 0; j < NUMERO_DE_NOTAS; ++j)
        {
            cout << alunos[i].notas[j] << " ";
        }
        cout << "\n";
    }
}
