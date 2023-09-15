#include<iostream>
using std::cin, std::cout, std::endl;

//Procedimento exibe todos os elementos do vetor
void imprimeVetor(const int* vetor, std::size_t n) //ou: void imprimeVetor(const int vetor[], std::size_t n)
{
  cout << "Elementos do vetor:\n";
  for (int i = 0; i < n; ++i)
    cout << vetor[i] <<" ";
  cout << "\n";
}

int main()
{
  int n, i, *dados;

  cout << "Entre com o numero de elementos\n";
  cin >> n;

  dados = new int[n];

  cout << "Entre com os elementos do vetor\n";
  for (i = 0; i < n; ++i)
    cin >> dados[i];

  imprimeVetor(dados,n);

  delete [] dados;
}
