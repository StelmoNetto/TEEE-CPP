#include<iostream>
#include<cmath>
using std::cin, std::cout, std::endl;

class Ponto
{
	public:
      Ponto(int x = 0, int y = 0);

      inline void alterarPonto(int x, int y);

      const Ponto& obterPonto() const;

      const int& obterX() const;

      void exibe() const;

      //Calcula a distância eucliadiana
      float distancia(const Ponto& outro) const;

	private:
	  int _x, _y;
      mutable size_t numeroDeAcessos{};
      static const size_t MaximoNumeroDeAcessos{ 3 }; //inicializado na declaração em tipos integrais
};

Ponto::Ponto(int x, int y) : _x{x}, _y{y} {}

inline void Ponto::alterarPonto(int x, int y)
{
    this->_x = x;
    this->_y = y;
}

const Ponto& Ponto::obterPonto() const
{
    if(numeroDeAcessos < MaximoNumeroDeAcessos)
        cout << "Chamado " << ++numeroDeAcessos << " vez(es)" << endl;

    return *this;
}

const int& Ponto::obterX() const
{
    return _x;
}

void Ponto::exibe() const
{
    cout << "<x,y> = <" << _x << "," << _y <<">\n";
}

float Ponto::distancia(const Ponto& outro) const
{
    return sqrt(pow(outro._x - _x, 2.0) + pow(outro._y - _y, 2.0));
}

int main()
{
  Ponto p6;
  cout << p6.obterPonto().obterPonto().obterPonto().obterPonto().obterX() << endl;
}
