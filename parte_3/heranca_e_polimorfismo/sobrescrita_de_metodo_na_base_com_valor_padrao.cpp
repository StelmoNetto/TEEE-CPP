#include<iostream>
using std::cout, std::endl;

class Base
{
public:
 virtual void umMetodo(int i = 2) const  { cout << "i = " << i << " em Base\n"; }
};

class Derivada : public Base
{
public:
 virtual void umMetodo(int i = 4) const override { cout << "i = " << i << " em Derivada\n"; }
};

int main()
{
 Base objBase;
 objBase.umMetodo();

 Derivada objDer;
 objDer.umMetodo();

 Base& objBaseRefParaDer = objDer;
 objBaseRefParaDer.umMetodo();
}
