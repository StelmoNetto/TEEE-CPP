#include<iostream>
#include<memory>
using std::cin,std::cout, std::endl;

int main()
{
    {
      auto ponteiro = std::make_unique<int>(2); //inteiro inicializado com 2
      cout << "Valor = " << *ponteiro << endl; //2

      ponteiro.reset();
    }

    {
      auto ponteiro = std::make_unique<int>(2); //inteiro inicializado com 2
      cout << "Valor = " << *ponteiro << endl; //2

      ponteiro.reset(new int{ 4 }); //Libera e substitui
      cout << "Valor = " << *ponteiro << endl; //2
    }
}
