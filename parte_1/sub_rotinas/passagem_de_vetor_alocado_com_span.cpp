#include<iostream>
#include<span>
using std::cin, std::cout, std::endl;

int main()
{
  std::size_t n{ 3 };
  auto vetor = new int[n] { 1, 2, 4 };
  std::span vetorSpan{ vetor, n }; //Precisa do número de elementos n

  auto saidaDoVetor = [](std::span<int> vetor)
  {
    for(auto e : vetor)
      cout << e << " ";
    cout << endl;
  };

  saidaDoVetor(vetorSpan);

  delete [] vetor;
}
