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
 virtual void umMetodoPrivadoNaBase() const override { cout << __func__ << " em Derivada\n"; }

protected:
 virtual void umMetodoPublicoNaBase() const override { cout << __func__ << " em Derivada\n"; }

private:
 virtual void umMetodoProtegidoNaBase() const override { cout << __func__ << " em Derivada\n"; }
};

int main()
{
 Derivada obj;

 obj.umMetodoPrivadoNaBase();
 //obj.umMetodoPublicoNaBase(); //Inacessível

 //Ainda é possível o acesso:
 Base& ref = obj;
 ref.umMetodoPublicoNaBase();
}
