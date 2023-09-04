#include<iostream>
using std::cin,std::cout, std::endl;

int main()
{
  int x = 0;
  int *p1, *p2; //Dois ponteiros para variáveis inteiras

  p1 = &x;
  p2 = p1; //O endereço em p1 (de x) é atribuído a p2, então ambos apontam para x.

  *p2 = 5;

  cout << "Endereco em p1: " << p1 << "\n";
  cout << "Endereco em p2 : " << p2 << "\n";
  cout << "conteudo da variável (x) apontada por p1: " << *p1 << "\n";
  cout << "conteudo da variavel (x) apontada por p2: " << *p2;
}
