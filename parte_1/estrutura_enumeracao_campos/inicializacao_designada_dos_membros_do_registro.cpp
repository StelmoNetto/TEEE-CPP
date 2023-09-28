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
    NotasEscolares alunoFulano{
        .nome = "Fulano",
        .nota1 = 10.0F,
        .nota2 = 8.0F,
        .nota3 = 7.0F
    };//Inicializando membros


    cout << "O aluno " << alunoFulano.nome << " tem notas:\n";
    cout << alunoFulano.nota1 << " " << alunoFulano.nota2 << " " << alunoFulano.nota3 << "\n";

    NotasEscolares alunoBeltrano{
    .nome = "Beltrano"
    };//nota1 = nota2 = nota3 = 0.0f

    cout << "O aluno " << alunoBeltrano.nome << " tem notas:\n";
    cout << alunoBeltrano.nota1 << " " << alunoBeltrano.nota2 << " " << alunoBeltrano.nota3 << "\n";
}
