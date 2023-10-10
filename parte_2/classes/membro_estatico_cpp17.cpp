#include<iostream>
#include<cmath>
#include <utility>
using std::cin, std::cout, std::endl;

class Ponto
{
	public:
      Ponto(int x = 0, int y = 0);

      inline void alterarPonto(int x, int y);

      const int& obterX() const;

      float distancia(const Ponto& outro) const;

	private:
	  int _x, _y;
      mutable size_t numeroDeAcessosParaX{}, numeroDeAcessosParaY{};
};

Ponto::Ponto(int x, int y) : _x{x}, _y{y} {}

inline void Ponto::alterarPonto(int x, int y)
{
    this->_x = x;
    this->_y = y;
}

const int& Ponto::obterX() const
{
    cout << "Acessado " << ++numeroDeAcessosParaX << " vez(es)" << endl; //Alteração permitida por método const – é mutável
    return _x;
}

//Calcula a distância eucliadiana
float Ponto::distancia(const Ponto& outro) const
{
    return sqrt(pow(outro._x - _x, 2.0) + pow(outro._y - _y, 2.0));
}

class CriadorDePontoUnico
{
public:
  Ponto obterPonto() const { return pontoCompartilhado; }
  void alterarPonto(Ponto p) { pontoCompartilhado = p; }
private:
 static inline Ponto pontoCompartilhado;
};

class Circulo
{
  public:
   Circulo(const Ponto& centro, float raio);
   float obterRaio();

   void novoCentro(const Ponto& centro);

   const Ponto& obterCentro() const;
   Ponto& obterCentro();

  private:
   Ponto _centro;
   float _raio;
};

Circulo::Circulo(const Ponto& centro, float raio) : _centro{ centro }, _raio{ raio } {}

float Circulo::obterRaio() { return _raio; }

void Circulo::novoCentro(const Ponto& centro) { _centro = centro; }

const Ponto& Circulo::obterCentro() const { return _centro; }

Ponto& Circulo::obterCentro() { return const_cast<Ponto&>(std::as_const(*this).obterCentro()); }

int main()
{
  CriadorDePontoUnico criador1, criador2{};
  cout << "X de P1 " << criador1.obterPonto().obterX() << endl;
  criador1.alterarPonto(Ponto{ 1,3 });

  cout << "X de P2 " << criador2.obterPonto().obterX() << endl;
}
