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

      void exibe() const;

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

void Ponto::exibe() const
{
    cout << "<x,y> = <" << _x << "," << _y <<">\n";
}

//Calcula a distância eucliadiana
float Ponto::distancia(const Ponto& outro) const
{
    return sqrt(pow(outro._x - _x, 2.0) + pow(outro._y - _y, 2.0));
}

class CriadorDePontoUnico
{
public:
  static Ponto& obterPonto() { return pontoCompartilhado; }
  static void alterarPonto(Ponto p) { pontoCompartilhado = p; }
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
  Ponto&  p1{ CriadorDePontoUnico::obterPonto() };
  p1.alterarPonto(1, 1);

  auto&  p2 = CriadorDePontoUnico::obterPonto();
  p2.alterarPonto(2, 2);

  p1.exibe();
  p2.exibe();

  Ponto p3{ 3,3 };
  CriadorDePontoUnico::alterarPonto(p3);

  p1.exibe();
  p2.exibe();
}
