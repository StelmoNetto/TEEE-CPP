#include<iostream>
#include<cmath>
using std::cin, std::cout, std::endl;

class Ponto
{
	public:
    Ponto();

    Ponto(int x);

	  Ponto(int x, int y);

	  void alterarCoordenada(int x, int y);

    float distancia(const Ponto& outro);

	private:
	  int _x, _y;
};

Ponto::Ponto() : _x{0}, _y{0} {}

Ponto::Ponto(int x) : _x{x}, _y{} {}

Ponto::Ponto(int x, int y) : _x{x}, _y{y} {}

void Ponto::alterarCoordenada(int x, int y)
{
   _x = x;
   _y = y;
}

//Calcula a distância eucliadiana
float Ponto::distancia(const Ponto& outro)
{
    return sqrt(pow(outro._x - _x, 2.0) + pow(outro._y - _y, 2.0));
}

int main()
{
  Ponto p5(); //Ilegal
}
