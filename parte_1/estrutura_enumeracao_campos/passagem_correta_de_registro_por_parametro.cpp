#include<iostream>
using std::cin, std::cout, std::endl;

struct NotasEscolares
{
  char nome[100];
  float notas[3];
};

void inserirDados(NotasEscolares* aluno)
{
  cout << "Entre com o nome do aluno\n";
  cin.get((*aluno).nome, 100);

  for (int i = 0; i < 3; i++)
  {
    cout << "Entre com a nota" << i + 1 <<endl;
    cin >> (*aluno).notas[i];
  }
}

float calculaMedia(const NotasEscolares& aluno)
{
  float soma{};

  for (auto nota : aluno.notas)
  {
    soma += nota;
  }

  return soma / 3;
}

int main()
{
  NotasEscolares aluno;
  float media;

  inserirDados(&aluno);
  media = calculaMedia(aluno);

  cout << "O aluno " << aluno.nome << " tem media: "<< media;
}
