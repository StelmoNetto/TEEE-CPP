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
  membroAlocado = new int{*outroObj.membroAlocado}; //Acesso direto de membro
 }

 UmaClasse(UmaClasse&& outroObj) noexcept : membroAlocado{ outroObj.membroAlocado }
 {
  cout << "Objeto criado, alocando e movimentando membros " << membroAlocado << "\n";
  outroObj.membroAlocado = nullptr;
 }

 ~UmaClasse()
 {
  cout << "Objeto destruido e desalocando membros\n";
  delete membroAlocado;
 }

 int obterDado() const{ return *membroAlocado; }

 UmaClasse novo(int v)
 {
    UmaClasse b{v};
    return b; //Retorno de um objeto local chama o construtor de movimento implicitamente
 }

 private:
  int* membroAlocado{nullptr};
}; //Fim da classe UmaClasse

int main()
{
 UmaClasse obj1{ 4 };
 UmaClasse obj2{ obj1.novo(2) };
 UmaClasse obj3{ std::move(obj1) }; //Chama explicitamente o construtor de movimento
}
