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
    NotasEscolares alunos[NUMERO_DE_ALUNOS];
    int i, j;
    for (i = 0; i < NUMERO_DE_ALUNOS; ++i)
    {
        cout << "Entre com o nome do aluno" << i + 1 << endl;
        cin >> alunos[i].nome;

        for (j = 0; j < NUMERO_DE_NOTAS; ++j)
        {
            cout << "Entre com a nota" << j + 1 << " do aluno " << alunos[i].nome << endl;
            cin >> alunos[i].notas[j];
        }
    }
}
