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
    NotasEscolares notasDoAluno { "Fulano", 10.0, 8, 7 }; //Inicialização direta de membros

    cout << "O aluno " << notasDoAluno.nome << " tem notas:\n";
    cout << notasDoAluno.nota1 << " " << notasDoAluno.nota2 << " " << notasDoAluno.nota3 << "\n";
}
