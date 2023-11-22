#include <iostream>
using std::cout, std::endl;

class UmaClasse
{
public:
 UmaClasse() : membro{ 0 } { exibe(); }

 UmaClasse(int v) : membro{ v } { exibe(); }

 int obter() const { return membro; }

 void exibe() const { cout << "2: Membro = " << membro << endl; }

private:
 int membro;
};

class Base
{
public:
  Base() { exibe(); }

  Base(UmaClasse& obj) : membro{ obj } { exibe(); }

  void exibe()const
  {
    cout << "1: Membro = " << membro.obter() << endl;
  }

private:
 UmaClasse membro;
};

class Derivada : public Base
{
public:
  Derivada() : Base(objMembro) { cout << "3\n"; }

  Derivada(int v) : Base(objMembro), objMembro{v}  //1º: construtor da base, mas objMembro não foi inicializado. 2º: membro é inicializado. 3º o construtor de Derivada é chamado
  {
      cout << "3: Membro = " << objMembro.obter() << endl;
  }

private:
  UmaClasse objMembro;
};

int main()
{
  Derivada objDer{5};
}
