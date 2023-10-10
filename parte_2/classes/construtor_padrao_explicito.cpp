#include<iostream>
using std::cin, std::cout, std::endl;

class UmaClasse
{
 public:
  UmaClasse() = default;
  UmaClasse(int n) : membro{n}
  {
    cout << "Objeto criado e membros " << membro << "\n";
  }
 private:
  int membro{};
};

int main()
{
    UmaClasse objeto, outro{};
}
