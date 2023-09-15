#include<iostream>
using std::cin, std::cout, std::endl;

const size_t N = 3;
using Vetor = int[N];

void escreveVetor(const Vetor& vetor)
{
  cout << "Vetor de " << std::size(vetor) << " elementos\n";
  for (auto elem : vetor)
    cout << elem << " ";
  cout << endl;
}

int main()
{
  int v[N]{ 2,1 };
  int(&refVetor)[] = v;
  //similar a:
  //int* ptr = v;
  //int*& refVetor = ptr;

  refVetor[1] = 3;
  escreveVetor(v);
}
