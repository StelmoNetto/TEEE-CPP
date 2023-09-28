#include<iostream>
using std::cin, std::cout, std::endl;

struct NotasEscolares
{
    //Declaração dos membros
    char nome[50];
    float nota1, nota2, nota3;
};

int main()
{
    NotasEscolares notasDoAluno;

    cout << "Entre com o nome do aluno\n";
    cin >> notasDoAluno.nome;

    cout << "Entre com as notas 1, 2 e 3\n";
    cin >> notasDoAluno.nota1 >> notasDoAluno.nota2 >> notasDoAluno.nota3;

    //calculando a média
    auto media = (notasDoAluno.nota1 + notasDoAluno.nota2 + notasDoAluno.nota3) / 3;
    cout << notasDoAluno.nome << " tem média = " << media;
}
