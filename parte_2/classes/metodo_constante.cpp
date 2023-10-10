#include<iostream>
#include<cmath>
using std::cin, std::cout, std::endl;

class Ponto
{
public:
  Ponto();

  Ponto(int x);

	Ponto(int x, int y);

	void alterarPonto(int x, int y);

  void alterarX(int x);

  int obterX() const;

  float distancia(const Ponto& outro) const;
private:
  int _x, _y;
};

Ponto::Ponto() : _x{0}, _y{0} {}

Ponto::Ponto(int x) : _x{x}, _y{} {}

Ponto::Ponto(int x, int y) : _x{x}, _y{y} {}

void Ponto::alterarPonto(int x, int y)
{
   _x = x;
   _y = y;
}

void Ponto::alterarX(int x) { _x = x; }

int Ponto::obterX() const
{
    return _x;
}

//Calcula a distância eucliadiana
float Ponto::distancia(const Ponto& outro) const
{
    return sqrt(pow(outro._x - _x, 2.0) + pow(outro._y - _y, 2.0));
}

int main()
{
  Ponto p1;
  p1.alterarPonto(1,2);

  const Ponto p2;
  p2.alterarPonto(1,2); //Não é permitido alteração
}
