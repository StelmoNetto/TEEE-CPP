#include<iostream>
#include<cmath>
#include<memory>
using std::cin, std::cout, std::endl;

class Bcirc; //Declaração antecipada

class Acirc
{
public:
 Acirc() { cout << "Construtor de A\n"; }
~Acirc() { cout << "Destrutor de A\n"; }

 void set(std::shared_ptr<Bcirc> ptr)
 {
   this->ptrB = ptr;
 }

private:
 std::shared_ptr<Bcirc> ptrB;
};

class Bcirc
{
public:
 Bcirc() { cout << "Construtor de B\n"; }
 ~Bcirc() { cout << "Destrutor de B\n"; }

 void set(std::shared_ptr<Acirc> ptr)
 {
   this->ptrA = ptr;
 }

private:
 std::shared_ptr<Acirc> ptrA;
};

int main()
{
  auto a = std::make_shared< Acirc >();
  auto b = std::make_shared< Bcirc >();

  a->set(b);
  b->set(a);
}
