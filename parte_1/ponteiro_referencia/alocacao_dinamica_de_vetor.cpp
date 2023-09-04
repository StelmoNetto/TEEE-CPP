#include<iostream>
using std::cin,std::cout, std::endl;

int main()
{
  int numeroDeElementos;

  cout << "Entre com o numero de elementos do vetor\n";
  cin >> numeroDeElementos;

  //Alocando espaço na memória para numeroDeElementos inteiros
  int* dados = new(std::nothrow) int[numeroDeElementos]; //dados está em stack

  //Verificando o sucesso da alocação.
  if (dados == nullptr)
  {
    cout << "A alocação dinâmica falhou\n";
    exit(1); //Finaliza o programa
  }

  //Usando o vetor alocado.
  dados[0] = 2;
  dados[1] = 3;

  //Desalocando memória utilizada pelo vetor
  delete [] dados;
  dados = nullptr;
}
