#include<iostream>
using std::cout, std::endl;

class Base
{
public:
//...
protected:
 int membro{ 2 };
};

class Exibivel
{
public:
 virtual void exibe() const = 0; //Redefinida-o na classe derivada

 virtual ~Exibivel() = default;
};

class BaseExibivel : public Base, public Exibivel //Ordem de criação -->
{
public:
//...
  void exibe() const override{ cout << "Membro da Base = " << membro <<endl; }
};

int main()
{
    Exibivel&& baseExibivel = BaseExibivel{};

    baseExibivel.exibe();
}
