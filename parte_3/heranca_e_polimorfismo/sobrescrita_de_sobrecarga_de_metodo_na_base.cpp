#include<iostream>
using std::cout, std::endl;

class Base
{
public:
 virtual ~Base() = default;

 virtual void umMetodo() const { cout << "Método de Base\n"; }

 virtual void umMetodo(int i) const { cout << "Sobrecarregado em Base: i = " << i << endl; }
};

class Derivada : public Base
{
public:
 virtual ~Derivada() = default;

 virtual void umMetodo() const override { cout << "Método sobrecarregado de Base\n"; } //Apenas um dos métodos é sobrescrito
};

int main()
{
 Derivada objDer;

 objDer.umMetodo();

 //objDer.umMetodo(1); //Erro: oculto

 //Uma solução
 Base& ref = objDer; //Base obj = objDer;

 ref.umMetodo(1); //Ok
}
