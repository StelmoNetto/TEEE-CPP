#include<iostream>
#include<cmath>
#include<cstring>
using std::cin, std::cout, std::endl;

class UmaClasse
{
 public:
  UmaClasse(int n) : membroPrivado{ n } {}

  friend void funcaoAmiga(UmaClasse& obj);

 private:
  int membroPrivado{};
};

void funcaoAmiga(UmaClasse& obj)
{
 cout << "Valor = " << obj.membroPrivado << "\n";
}

int main()
{
 UmaClasse objeto{ 3 };
 funcaoAmiga(objeto);
}
