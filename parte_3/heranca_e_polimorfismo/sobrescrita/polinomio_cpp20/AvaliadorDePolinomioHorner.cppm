export module AvaliadorDePolinomioHorner;

import AvaliadorDePolinomio;

import <initializer_list>;

namespace Heranca::SobrescritaDeClasse::inline Exemplo
{
  export class PolinomioComAvalidorHorner : public Polinomio
  {
  public:
    PolinomioComAvalidorHorner(std::initializer_list<double> coeficientes);

    virtual double operator()(double x) const override;
  };
}
