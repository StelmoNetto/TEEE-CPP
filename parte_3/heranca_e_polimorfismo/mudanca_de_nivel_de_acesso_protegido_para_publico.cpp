#include<iostream>
using std::cout, std::endl;

class Base
{
public:
 virtual void umMetodoPublicoNaBase() const { cout << __func__ << " em Base\n"; }

protected:
 virtual void umMetodoProtegidoNaBase() const { cout << __func__ << " em Base\n"; }

private:
 virtual void umMetodoPrivadoNaBase() const { cout << __func__ << " em Base\n"; }
};

class Derivada : public Base
{
public:
 using Base::umMetodoProtegidoNaBase;

protected:
 using Base::umMetodoPublicoNaBase;
};

int main()
{
 Derivada obj;

 obj.umMetodoProtegidoNaBase();
 //obj.umMetodoPublicoNaBase(); //Inacessível

 //Ainda é possível o acesso:
 Base& ref = obj;
 ref.umMetodoPublicoNaBase();
}
