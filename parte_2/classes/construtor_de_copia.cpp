#include<iostream>
#include<cmath>
#include<memory>
using std::cin, std::cout, std::endl;

class UmaClasse
{
 public:
 UmaClasse() : membroAlocado{ new int{} }
 {
  cout << "Objeto criado e alocando membros\n";
 }

 UmaClasse(int n) : membroAlocado{ new int{ n } }
 {
  cout << "Objeto criado e alocando membros\n";
 }

 UmaClasse(const UmaClasse& outroObj)
 {
  cout << "Objeto criado, alocando e copiando membros\n";
  membroAlocado = new int{*outroObj.membroAlocado}; //Acesso direto de membro
 }

 ~UmaClasse()
 {
  cout << "Objeto destruido e desalocando membros\n";
  delete membroAlocado;
 }

 int obterDado() const{ return *membroAlocado; }

 private:
  int* membroAlocado{nullptr};
}; //Fim da classe UmaClasse

int main()
{
 UmaClasse obj1{ 4 };
 cout << "1º Valor = " << obj1.obterDado() << endl;

 UmaClasse obj2{ obj1 };
 cout << "2º Valor = " << obj2.obterDado() << "\n";
}
