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
    Ponto* pontos = new Ponto[3]{ {2,1},{4,3} }; //pontos[0] = Ponto{2,1}, pontos[1] = Ponto{4,3} e pontos[2] = Ponto{0,0}

    delete[] pontos;
    pontos = nullptr;
}
