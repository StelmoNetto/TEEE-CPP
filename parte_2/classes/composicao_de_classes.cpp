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

    float distancia(const Ponto& outro);

    int obterX();

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

//Calcula a distância eucliadiana
float Ponto::distancia(const Ponto& outro)
{
    return sqrt(pow(outro._x - _x, 2.0) + pow(outro._y - _y, 2.0));
}

int Ponto::obterX() { return _x; }

class Circulo
{
  public:
   Circulo(const Ponto& centro, float raio);
   float obterRaio();
   Ponto obterCentro();
  private:
   Ponto _centro;
   float _raio;
};

Circulo::Circulo(const Ponto& centro, float raio) : _centro{ centro }, _raio{ raio } {}

float Circulo::obterRaio() { return _raio; }

Ponto Circulo::obterCentro() { return _centro; }

int main()
{
  Ponto centro{ 2,4 };

  float raio = 3.6f;
  Circulo c1{ centro,raio };

  cout << "Raio = " << c1.obterRaio() << endl;
  cout << "x = "<<c1.obterCentro().obterX() << endl;
}
