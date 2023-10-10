#include<iostream>
using std::cin, std::cout, std::endl;

class UmaClasse
{
 public:
 UmaClasse() : membroAlocado{ nullptr }
 {
  cout << "Objeto criado e alocando membros\n";
 }

 UmaClasse(int n) : membroAlocado{ new int{ n } }
 {
  cout << "Objeto criado e alocando membros " << *membroAlocado << endl;
 }

 UmaClasse(const UmaClasse& outroObj)
 {
  cout << "Objeto criado, alocando e copiando membros " << *outroObj.membroAlocado << endl;
  membroAlocado = new int{*outroObj.membroAlocado}; //Acesso direto de membro
 }

 UmaClasse(UmaClasse&& outroObj) noexcept : UmaClasse()
 {
   cout << "Objeto criado, alocando e movimentando membros \n";
   swap(*this,outroObj);
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
 void swap(UmaClasse& a, UmaClasse& b) noexcept
 {
   std::swap(a.membroAlocado, b.membroAlocado);
 }

 int* membroAlocado;
}; //Fim da classe UmaClasse

int main()
{
  UmaClasse a{ 3 };
  UmaClasse b = 1; //b = UmaClasse{1};
}
