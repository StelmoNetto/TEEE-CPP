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
   static Ponto p; //privado
  public:
   Ponto obterPonto() { return p; }
};

Ponto CriadorDePontoUnico::p{ 2,1 };

int main()
{
  CriadorDePontoUnico criador1{}, criador2;
  cout << " P1 " << criador1.obterPonto().obterX() << endl;
  cout << " P2 " << criador2.obterPonto().obterX();
}
