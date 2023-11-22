#include "AvaliadorDePolinomioHorner.h"

#include <iostream>
#include <memory>

using std::cout, std::endl;

int main()
{
 using namespace Heranca::SobrescritaDeClasse;

 PolinomioComAvalidorHorner reta{ 1.0,-1.0 };

 Polinomio& polinomio = reta;

 double x{ 0.0 };
 auto y = polinomio(x); //método de Horner sendo chamado.
 cout << "Avalicao de reta(" << x << ") = x - 1 = " << x << " - 1 = " << y << endl;

 Polinomio&& equacaoQuadratica = PolinomioComAvalidorHorner { 1.0, 2.0,-1.0 };
 y = equacaoQuadratica(x); //método de Horner sendo chamado.
 cout << "Avalicao de p(" << x << ") = x² + 2 * x - 1 = " << x << "² + 2 * " << x << " - 1 = " << y << endl;

 std::unique_ptr<Polinomio> ptrPolinomio{ new PolinomioComAvalidorHorner{1.0, 2.0,-1.0} };

 x = 1.0;
 y = (*ptrPolinomio)(x); //método de Horner sendo chamado.
 y = ptrPolinomio->operator()(x); //Mesmo que acima
 cout << "Avalicao de p(" << x << ") = x² + 2 * x - 1 = " << x << "² + 2 * " << x << " - 1 = " << y << endl;
}
