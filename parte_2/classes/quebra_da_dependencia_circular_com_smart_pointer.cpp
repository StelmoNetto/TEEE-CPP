#include<iostream>
#include<memory>
using std::cin, std::cout, std::endl;

class B; //declaração antecipada
class A
{
public:
 A() { cout << "Construtor de A\n"; }
 ~A() { cout << "Destrutor de A\n"; }

 void set(std::shared_ptr<B> ptr)
 {
   this->ptrB = ptr;
 }

private:
 std::weak_ptr<B> ptrB;
};

class B
{
public:
 B(std::shared_ptr<A> ptr) : ptrA{ ptr } { cout << "Construtor de B\n"; }
 ~B() { cout << "Destrutor de B\n"; }

private:
 std::shared_ptr<A> ptrA; //Poderia ser weak_ptr
};

int main()
{
  auto a = std::make_shared< A >();
  auto b = std::make_shared< B >(a);
  a->set(b);
}
