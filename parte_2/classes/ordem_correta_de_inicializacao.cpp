#include<iostream>
#include<cmath>
using std::cin, std::cout, std::endl;

class UmaClasse
{
public:
  UmaClasse(int valor);

  void exibeMembros();

private:
  int membro1; // Inicializado 1º
  int membro2; // Inicializado em 2º
};

UmaClasse::UmaClasse(int valor) : membro1{valor}, membro2{membro1}{} //correto

void UmaClasse::exibeMembros()
{
  cout << "membro1 = " << membro1 << endl;
  cout << "membro2 = " << membro2 << endl;
}


int main()
{
  UmaClasse obj{ 1 };
  obj.exibeMembros();
}
