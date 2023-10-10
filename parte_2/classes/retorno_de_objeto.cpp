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

UmaClasse criar()
{
    UmaClasse b{}; //Deletado ao fim desse escopo
    return b; //Uma cópia temporária de b é retornada
}

int main()
{
    UmaClasse objeto;
    objeto = criar(); //membroAlocado de b já foi deletado
}
