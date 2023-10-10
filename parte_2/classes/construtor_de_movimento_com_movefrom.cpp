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

 UmaClasse(UmaClasse&& outroObj) noexcept
 {
    cout << "Objeto criado, alocando e movimentando membros \n";
    moveFrom(outroObj);
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
 void moveFrom(UmaClasse& objFonte) noexcept
 {
   membroAlocado = objFonte.membroAlocado;
   objFonte.membroAlocado = nullptr;
 }

 int* membroAlocado{nullptr};
}; //Fim da classe UmaClasse

int main()
{
 UmaClasse obj1{ 4 };
 UmaClasse obj2{ obj1.novo(2) };
 UmaClasse obj3{ std::move(obj1) }; //Chama explicitamente o construtor de movimento
}
