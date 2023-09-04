#include<iostream>
using std::cin,std::cout, std::endl;

int main()
{
  int x = 3;

  int& referenciaDeX = x;
  int* apontaParaX = &referenciaDeX; //Endereço da referência é o endereço de x

  *apontaParaX = 100; //Alterando x para 100

  cout << "x = " << x << endl;
}
