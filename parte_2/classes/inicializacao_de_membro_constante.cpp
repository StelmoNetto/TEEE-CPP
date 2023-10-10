#include<iostream>
#include<cmath>
using std::cin, std::cout, std::endl;

class Ponto
{
public:
  Ponto(int x = 0, int y = 0, size_t oId = cont++);
  Ponto alterarPonto(int x, int y);
  float distancia(const Ponto& outro) const;
private:
  int _x, _y;
  static size_t cont;
  const size_t id; //Se id é inicializado, seu valor é substituído pelo do construtor
};

size_t Ponto::cont;

Ponto::Ponto(int x, int y, size_t oId) : _x{x}, _y{y}, id{oId} { cout << "id = " << id << endl; }

Ponto Ponto::alterarPonto(int x, int y) { return {x,y}; }

float Ponto::distancia(const Ponto& outro) const
{
    return sqrt(pow(outro._x - _x, 2.0) + pow(outro._y - _y, 2.0));
}


int main()
{
  Ponto p1, p2{ 0,0,4 };
}
