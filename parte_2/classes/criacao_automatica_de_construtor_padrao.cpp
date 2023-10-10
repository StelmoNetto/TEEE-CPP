#include<iostream>
#include<cmath>
using std::cin, std::cout, std::endl;

class Ponto
{
  public:
   void alterarPonto(int x, int y);
   float distancia(const Ponto& outro);
  private:
   int _x, _y;
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

int main()
{
  Ponto p1; //Observação 1
  Ponto p2{}; //Observação 2
}
