#include<iostream>
#include<cmath>
#include<memory>
using std::cin, std::cout, std::endl;

class Ponto
{
public:
  Ponto(int x = 0, int y = 0);
  Ponto alterarPonto(int x, int y);
  int obterX() const;
  float distancia(const Ponto& outro) const;
private:
  int _x, _y;
};

Ponto::Ponto(int x, int y) : _x{x}, _y{y}{ }

Ponto Ponto::alterarPonto(int x, int y) { return {x,y}; }

int Ponto::obterX() const
{
    return _x;
}

float Ponto::distancia(const Ponto& outro) const
{
    return sqrt(pow(outro._x - _x, 2.0) + pow(outro._y - _y, 2.0));
}

int main()
{
    std::unique_ptr<Ponto> ponto = std::make_unique<Ponto>(2,1);

    cout << "x = " << ponto->obterX() << endl;
}
