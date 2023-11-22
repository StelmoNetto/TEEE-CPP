#include<iostream>
using std::cout, std::endl;

class Base
{
public:
 virtual ~Base() = default;

 virtual void umMetodo() const { cout << "Método de Base\n"; }
};

class Derivada : public Base
{
public:
 virtual ~Derivada() = default;

 using Base::umMetodo; //Passa a fazer parte da interface

 virtual void umMetodo(int i) const { cout << "Sobrecarregado de Base: i = " << i << endl; }
};

int main()
{
 Derivada objDer;

 objDer.umMetodo(); //Ok

 objDer.umMetodo(1);
}
