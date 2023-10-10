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

   void novoCentro(const Ponto& centro);
   Ponto& obterCentro();
   const Ponto& obterCentro() const;

  private:
   Ponto _centro;
   float _raio;
};

Circulo::Circulo(const Ponto& centro, float raio) : _centro{ centro }, _raio{ raio } {}

float Circulo::obterRaio() { return _raio; }

void Circulo::novoCentro(const Ponto& centro) { _centro = centro; }

Ponto& Circulo::obterCentro() { return _centro; }

const Ponto& Circulo::obterCentro() const { return _centro; }

int main()
{
  Circulo fronteiraDoMario{ {1, 0}, 3.5f };
  fronteiraDoMario.novoCentro(Ponto{ 2, 4 });

  const Circulo obstaculo{ {1, 3}, 2.0f };
  auto& posicao{ obstaculo.obterCentro() }; //Ok: método const
}
