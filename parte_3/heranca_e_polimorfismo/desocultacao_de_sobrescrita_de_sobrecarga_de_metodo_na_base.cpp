#include<iostream>
using std::cout, std::endl;

class Base
{
public:
 virtual void umMetodo() const { cout << "Método de Base\n"; }

 virtual void umMetodo(int i) const { cout << "Sobrecarregado em Base: i = " << i << endl; }
};

class Derivada : public Base
{
public:
 using Base::umMetodo;

 virtual void umMetodo() const override { cout << "Método sobrecarregado de Base\n"; }
};

int main()
{
 Derivada objDer;

 objDer.umMetodo();
 objDer.umMetodo(1); //Ok
}
