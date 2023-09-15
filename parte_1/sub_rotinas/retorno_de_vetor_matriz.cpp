#include<iostream>
using std::cin, std::cout, std::endl;

int primeiroElementoDoVetor(const int* v) { return v[0]; }

int* obterVetor() { return new int[3]{ 1,2,3 }; }

int** obterMatriz()
{
  int** matriz = new int* [2];

  for (int i = 0; i < 2; i++)
    matriz[i] = new int[2]{ 1,2 };

  return matriz;
}

int main()
{
  int* vetor = obterVetor();
  cout << primeiroElementoDoVetor(vetor) << endl;
  delete[] vetor;

  int** matriz = obterMatriz();
  cout << matriz[0][1] << endl;

  for (int i = 0; i < 2; i++)
    delete [] matriz[i];

  delete [] matriz;
}
