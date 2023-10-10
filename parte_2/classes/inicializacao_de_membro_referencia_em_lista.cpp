#include<iostream>
#include<cmath>
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
  static size_t cont;
  const size_t id;
};
size_t Ponto::cont;

Ponto::Ponto(int x, int y) : _x{x}, _y{y}, id{cont++} { cout << "id = " << id << endl; }

Ponto Ponto::alterarPonto(int x, int y) { return {x,y}; }

int Ponto::obterX() const
{
    return _x;
}

float Ponto::distancia(const Ponto& outro) const
{
    return sqrt(pow(outro._x - _x, 2.0) + pow(outro._y - _y, 2.0));
}

class TesteDePonto {
public:
  TesteDePonto(Ponto& p) : ponto{p}{}
  void teste(){ cout << "x = " << ponto.obterX() << endl; }
private:
  Ponto& ponto; //referência
};

int main()
{
  Ponto p{ 1,3 };

  TesteDePonto objDeTeste{ p };
  objDeTeste.teste();
}
