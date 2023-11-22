#include<iostream>
using std::cout, std::endl;

class Base
{
public:
 virtual ~Base() = default;

 virtual void umMetodo() const { cout << "Método de Base\n"; }
};

class Derivada : public Base {
public:
 virtual ~Derivada() = default;

 virtual void umMetodo(int i) const { cout << "Sobrecarregado de Base: i = " << i << endl; }
};

int main()
{
 Derivada objDer;

 objDer.umMetodo(1);
}
