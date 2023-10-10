#include<iostream>
using std::cin, std::cout, std::endl;

class UmaClasse; //Declaração antecipada, para uso em OutraClasse

class OutraClasse
{
 public:
  void metodo(UmaClasse& obj);
};

class UmaClasse
{
 public:
  UmaClasse(int n) : membroPrivado{ n }
  {
    cout << "Objeto criado e membro = " << membroPrivado << "\n";
  }

  friend class OutraClasse;

 private:
  int membroPrivado{};
};

void OutraClasse::metodo(UmaClasse& obj)
{
  cout << "Acessando membro privado = " << obj.membroPrivado << "\n";
}

int main()
{
 UmaClasse a{ 3 };
 OutraClasse objeto;
 objeto.metodo(a);
}
