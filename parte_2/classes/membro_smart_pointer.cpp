#include<iostream>
#include<cmath>
#include<memory>
using std::cin, std::cout, std::endl;

class Ponto
{
public:
  Ponto(int x = 0, int y = 0);
  Ponto alterarPonto(int x, int y);
  int obterX() const;
  float distancia(const Ponto& outro) const;
private:
  int _x, _y;
};

Ponto::Ponto(int x, int y) : _x{x}, _y{y}{ }

Ponto Ponto::alterarPonto(int x, int y) { return {x,y}; }

int Ponto::obterX() const
{
    return _x;
}

float Ponto::distancia(const Ponto& outro) const
{
    return sqrt(pow(outro._x - _x, 2.0) + pow(outro._y - _y, 2.0));
}

class ClasseComMembroSmartPointer
{
public:
 ClasseComMembroSmartPointer(Ponto p);
private:
 std::unique_ptr<Ponto> ponto;
};

ClasseComMembroSmartPointer::ClasseComMembroSmartPointer(Ponto p) : ponto{ std::make_unique<Ponto>(p) } {}

int main()
{
  ClasseComMembroSmartPointer objeto{ Ponto{3,2} };
}
