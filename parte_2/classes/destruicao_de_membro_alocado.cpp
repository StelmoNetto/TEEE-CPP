#include<iostream>
using std::cin, std::cout, std::endl;

class UmaClasse
{
 public:
 UmaClasse() : membroAlocado{ new int{} }
 {
  cout << "Criando objeto e alocando membros\n";
 }

 UmaClasse(int n) : membroAlocado{ new int{ n } }
 {
  cout << "Criando objeto e alocando membros\n";
 }

 ~UmaClasse()
 {
    cout << "Objeto destruido e desalocando membros\n";
    delete membroAlocado;
 }

 private:
  int* membroAlocado{ nullptr };
};

int main()
{
 UmaClasse objeto;

 UmaClasse* objetoAlocado = new UmaClasse;
 //UmaClasse* objetoAlocado = new UmaClasse{};
 delete objetoAlocado;
 objetoAlocado = nullptr;
}
