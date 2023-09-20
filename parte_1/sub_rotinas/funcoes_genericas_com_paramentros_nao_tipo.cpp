#include<iostream>
#include<string>
using std::cin, std::cout, std::endl;

//Referência para não decair a double* vetor
template<size_t N>
void escreveVetor(const double (&vetor)[N])
{
  for (auto elem : vetor)
    cout << elem << " ";
  cout << endl;
}

//Referência para não decair a double (*matriz)[M]
template<size_t N,size_t M>
void escreveMatriz(const double(&matriz)[N][M])
{
  for (auto& linha : matriz)
  {
    for (auto elem : linha)
      cout << elem << " ";
    cout << endl;
  }
}

int main()
{
  double vetor[]{ 1,2,3 };
  escreveVetor(vetor);

  double matriz[][2]{ 1,2,3,4 }; //Ou: double matriz[][2]{ {1,2}, {3,4}};
  escreveMatriz(matriz);
}
