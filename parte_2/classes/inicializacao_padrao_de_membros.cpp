#include<iostream>
#include<cmath>
using std::cin, std::cout, std::endl;

class Ponto
{
  public:
   void alterarPonto(int x, int y);
   float distancia(const Ponto& outro);
   void exibe();
  private:
   int _x{}, _y{};
};

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

void Ponto::exibe()
{
    cout << "x = " << _x << ", y = " << _y << endl;
}

int main()
{
  Ponto p1; //Construtor padrão
  Ponto p2{}; //Construtor zero-inicializado

  p1.exibe();
  p2.exibe();

}
