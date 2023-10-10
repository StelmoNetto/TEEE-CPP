#include<iostream>
#include<cmath>
using std::cin, std::cout, std::endl;

class Ponto
{
	public:
	  Ponto(int x, int y);
	  void alterarCoordenada(int x, int y);
    float distancia(const Ponto& outro);
	private:
	  int _x, _y;
};
Ponto::Ponto(int x, int y)
{
    _x = x;
    _y = y;
}

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
   Ponto p1(1, 4);

   int x = 7, y = 1;
   p1.alterarCoordenada(x, y);

   Ponto origem(0, 0);

   cout << "distância(P1,Origem) = " << p1.distancia(origem);
}
