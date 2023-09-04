#include<iostream>
using std::cin,std::cout, std::endl;

int main()
{
  int variavel{ 3 };

  int* ponteiro = &variavel;

  int*& referenciaDoPonteiro = ponteiro; //Apontam para o mesmo lugar

  *referenciaDoPonteiro = 5;

  cout << "variavel = " << variavel << endl;
}
