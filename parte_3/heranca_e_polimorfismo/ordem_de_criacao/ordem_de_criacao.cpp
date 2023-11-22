#include <iostream>
using std::cout;

class UmaClasse
{
public:
 UmaClasse() { cout << "2º o membro é criado e chama o construtor e UmaClasse\n"; }
};

class Base
{
public:
 Base() { cout << "1º o construtor da base é chamado\n"; }
};

class Derivada : public Base
{
public:
 Derivada() { cout << "3º o construtor de Derivada é chamado\n"; }

private:
 UmaClasse objMembro;
};

int main()
{
  Derivada objDer;
}
