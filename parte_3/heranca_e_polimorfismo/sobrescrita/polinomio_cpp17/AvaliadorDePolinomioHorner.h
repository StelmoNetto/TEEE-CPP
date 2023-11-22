#pragma once

#include "AvaliadorDePolinomio.h"

#include <initializer_list>

namespace Heranca::SobrescritaDeClasse::inline Exemplo
{
  class PolinomioComAvalidorHorner : public Polinomio
  {
  public:
    PolinomioComAvalidorHorner(std::initializer_list<double> coeficientes);

    virtual double operator()(double x) const override;
  };
}
