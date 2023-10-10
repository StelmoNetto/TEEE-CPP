#include<iostream>
#include<cmath>
using std::cin, std::cout, std::endl;

class Ponto
{
	public:
	  Ponto(int x, int y) : _x{x}, _y{y} {/*Método inline*/}

	  Ponto alterarCoordenada(int x, int y);

      float distancia(const Ponto& outro);
	private:
	  int _x, _y;
};

Ponto Ponto::alterarCoordenada(int x, int y)
{
    return {x,y};
}

//Calcula a distância eucliadiana
float Ponto::distancia(const Ponto& outro)
{
    return sqrt(pow(outro._x - _x, 2.0) + pow(outro._y - _y, 2.0));
}

int main()
{
   Ponto p1{1, 4}, p2{}, p3;
}
