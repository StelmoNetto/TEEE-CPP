#include<iostream>
#include<cmath>
#include<memory>
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
    UmaClasse obj1, obj2;

    obj1 = obj2; //Perigo! Atribuição de ponteiros membros. Haverá dupla deleção
}
