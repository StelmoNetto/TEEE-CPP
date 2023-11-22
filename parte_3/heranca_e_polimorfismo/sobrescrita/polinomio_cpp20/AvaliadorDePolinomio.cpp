module AvaliadorDePolinomio;

import <vector>;
import <cmath>;

namespace Heranca::SobrescritaDeClasse::inline Exemplo
{
    Polinomio::Polinomio(std::initializer_list<double> coeficientes) : _coeficientes{ coeficientes } {}

    double Polinomio::operator()(double x) const
    {
      auto y{0.0};

      for (auto expoente = _coeficientes.size() - 1; auto coef : _coeficientes)
        y += coef * std::pow(x, expoente--);

      return y;
    }
}
