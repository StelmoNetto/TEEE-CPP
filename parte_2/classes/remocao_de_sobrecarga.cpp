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

  void alterarX(double) = delete;

  float distancia(const Ponto& outro);
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

//Calcula a distância eucliadiana
float Ponto::distancia(const Ponto& outro)
{
    return sqrt(pow(outro._x - _x, 2.0) + pow(outro._y - _y, 2.0));
}

int main()
{
   Ponto p;
   p.alterarX(1);
   p.alterarX(1.55); //Ilegal. Excluída
}
