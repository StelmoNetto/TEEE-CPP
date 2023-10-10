#include<iostream>
using std::cin, std::cout, std::endl;

class UmaClasse {
public:
  UmaClasse(const char* valor) : UmaClasse{ std::atoi(valor) }{}
  UmaClasse(int valor) : membro{ valor } { exibeMembros(); }
  void exibeMembros() { cout << "membro = " << membro << endl; }
private:
  int membro;
};

int main()
{
    UmaClasse objeto{ "12" };
}
