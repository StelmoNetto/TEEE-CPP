module AvaliadorDePolinomioHorner;

import <initializer_list>;

namespace Heranca::SobrescritaDeClasse::inline Exemplo
{
  PolinomioComAvalidorHorner::PolinomioComAvalidorHorner(std::initializer_list<double> coeficientes) : Polinomio{ coeficientes }{}

  double PolinomioComAvalidorHorner::operator()(double x) const
  {
    auto end = _coeficientes.end();
    auto y{ _coeficientes[0] };

    for (auto coefIter = _coeficientes.begin() + 1; coefIter < end; ++coefIter)
    y = y * x + *coefIter;

    return y;
  }
}
