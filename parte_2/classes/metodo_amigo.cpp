#include<iostream>
#include<cmath>
#include<cstring>
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
  UmaClasse(int n) : membroPrivado{ n } {}

  friend void OutraClasse::metodo(UmaClasse& obj);

 private:
  int membroPrivado{};
};

void OutraClasse::metodo(UmaClasse& obj)
{
  cout << "Membro privado = " << obj.membroPrivado << "\n";
}

int main()
{
 UmaClasse a{ 3 };
 OutraClasse objeto;
 objeto.metodo(a);
}
