import AvaliadorDePolinomio;
import AvaliadorDePolinomioHorner;

import <iostream>;
using std::cout, std::endl;

int main()
{
    using namespace Heranca::SobrescritaDeClasse;

    auto x{ 2.1 };

    Polinomio polinomioComAvalidorSimples{ 2,1,-1 };
    cout << "f(" << x <<") = " << polinomioComAvalidorSimples(x) << endl;

    PolinomioComAvalidorHorner polinomioComAvalidorHorner{ 2,1,-1 };
    cout << "f(" << x <<") = " << polinomioComAvalidorHorner(x) << endl;
}
