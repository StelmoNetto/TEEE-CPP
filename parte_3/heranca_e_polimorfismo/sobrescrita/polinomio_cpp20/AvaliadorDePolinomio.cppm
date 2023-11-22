export module AvaliadorDePolinomio;

import <vector>;

namespace Heranca::SobrescritaDeClasse::inline Exemplo
{
  export class Polinomio
  {
  public:
    Polinomio(std::initializer_list<double> coeficientes);

    virtual double operator()(double x) const;

  protected:
    std::vector<double> _coeficientes;
  };
}
