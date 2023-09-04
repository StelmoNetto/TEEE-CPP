#include<iostream>
using std::cin,std::cout, std::endl;

int main()
{
  //Alocando uma área na memória para armazenar o valor para um tipo primitivo
  {
    int* ponteiro = new int; //Aloca espaço para um inteiro (32 bits). bad_alloc se falhar
    *ponteiro = 2;
    cout << "Valor = " << *ponteiro << endl;
  }
  //Alternativamente
  {
    auto ponteiro = new(std::nothrow) int{5}; //Não lança exceção se falhar. nullptr é retornado
    cout << "Valor = " << *ponteiro << endl;
  }
}
