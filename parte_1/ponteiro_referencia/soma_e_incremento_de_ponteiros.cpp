#include<iostream>
using std::cin,std::cout, std::endl;

const int TAMANHO = 3;
int main()
{
  short v[TAMANHO]{ 1, 4, 5 };

  auto p = v; //ponteiro aponta para o vetor v

  for (int i = 0; i < TAMANHO; ++i)
  {
      cout << *(p + i) << endl;
      //cout << (*p) + i << endl;
      //cout << (*p)++ << endl;
      //cout << *(p++) << endl;
      //cout << *(p + i) + i << endl;
  }
}
