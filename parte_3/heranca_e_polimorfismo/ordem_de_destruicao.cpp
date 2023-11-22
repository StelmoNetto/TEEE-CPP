#include <iostream>

using std::cout, std::endl;

class UmaClasse
{
public:
 UmaClasse() { cout << "2º: " << __func__ << " criado\n"; }

 virtual ~UmaClasse(){ cout << "2º: " << __func__ << " destruído\n"; }
};

class Base
{
public:
 Base() { cout << "1º: " << __func__ << " criado\n"; }

 virtual ~Base() { cout << "1º: " << __func__ << " destruído\n"; }
};

class Derivada : public Base
{
public:
 Derivada() { cout << "3º: " << __func__ << " criado\n"; }

 virtual ~Derivada() { cout << "3º: " << __func__ << " destruído\n"; }
private:
 UmaClasse objMembro;
};

int main()
{
  Derivada objDer;
}
