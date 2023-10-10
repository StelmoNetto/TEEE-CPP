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
  Ponto p1{1, 4}; //Dois parâmetros
  Ponto p2{3}; //Um parâmetro
  Ponto p3 = 2; //Um parâmetro: Ponto p3 = Ponto{2};
  Ponto p4; //Construtor padrão

  int x = 7, y = 1;
  p1 = Ponto{ x,y }; //Objeto anônimo sendo atribuído a p1
}
