#include<iostream>
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
  membroAlocado = new int{*outroObj.membroAlocado};
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

UmaClasse criaObjetoUmaClasse(){ return UmaClasse{}; } //Uma cópia criada pelo construtor

int main()
{
 UmaClasse obj1{ 4 };

 UmaClasse obj2 = obj1; //Não é uma atribuição. O construtor de cópia é chamado

 auto obj3 = criaObjetoUmaClasse(); //Pode ou não retornar uma cópia
}
