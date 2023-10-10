#include<iostream>
using std::cin, std::cout, std::endl;

class UmaClasse
{
 public:
  UmaClasse() = default;
  UmaClasse(const UmaClasse& obj) = delete;
 private:
  int* membroAlocado;
};

int main()
{
  UmaClasse obj1;
  UmaClasse obj2{ obj1 }; //Ilegal. Excluída
}
