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

void funcao(UmaClasse u){} //u é destruído ao fim da execução

int main()
{
    UmaClasse objetoDuplamenteDeletado;
    funcao(objetoDuplamenteDeletado);
}
