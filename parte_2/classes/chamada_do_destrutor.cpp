#include<iostream>
using std::cin, std::cout, std::endl;

class UmaClasse
{
 public:
  UmaClasse();
  ~UmaClasse(); //Destrutor: o ~ o identifica
};

UmaClasse::UmaClasse() { cout << "Criando objeto\n"; }

//Definição do corpo do destrutor
UmaClasse::~UmaClasse(){ cout << "Desalocando membros\n"; }

int main()
{
    UmaClasse objeto; //Excluído ao término do escopo desse programa

    auto outro{ new UmaClasse };
    delete outro;
}
