import AvaliadorDePolinomio;
import AvaliadorDePolinomioHorner;

import <iostream>;
import <memory>;

using std::cout, std::endl;

int main()
{
 using namespace Heranca::SobrescritaDeClasse;

 PolinomioComAvalidorHorner reta{ 1.0,-1.0 };

 Polinomio& polinomio = reta;

 double x{ 0.0 };
 auto y = polinomio(x); //método de Horner sendo chamado.
 cout << "Avalicao de reta(" << x << ") = x - 1 = " << y << endl;

 Polinomio&& equacaoQuadratica = PolinomioComAvalidorHorner { 1.0, 2.0,-1.0 };
 y = equacaoQuadratica(x); //método de Horner sendo chamado.
 cout << format("Avalicao de p(x={:.3}) = x^2 + 2x - 1 = {:.3}", x, y) << endl;

 std::unique_ptr<Polinomio> ptrPolinomio{ new PolinomioComAvalidorHorner{1.0, 2.0,-1.0} };

 x = 1.0;
 y = (*ptrPolinomio)(x); //método de Horner sendo chamado.
 y = ptrPolinomio->operator()(x); //Mesmo que acima
 cout << format("Avalicao de p(x={:.3}) = x^2 + 2x - 1 = {:.3}", x, y) << endl;
}
