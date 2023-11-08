#pragma once

#include <compare>
#include <istream>
#include <ostream>

namespace Classes
{
    inline namespace SobrecargaDeOperadores
    {
      inline namespace Binario
      {
        inline namespace ComMetodo
        {
          class UmaClasse; //Declaração antecipada

          const UmaClasse operator+(const UmaClasse& primeiroOperando, const UmaClasse& segundoOperando);

          class UmaClasse
          {
          public:
              UmaClasse();

              UmaClasse(int valorDoMembro);

              UmaClasse(const UmaClasse& outro);

              UmaClasse(UmaClasse&& outro) noexcept;

              UmaClasse& operator=(const UmaClasse& objetoDaDireita);

              UmaClasse& operator=(UmaClasse&& objetoDaDireita) noexcept;

              int operator!() const;

              int operator()() const;

              operator auto() const { return *membroAlocado; }

              UmaClasse& operator++();

              UmaClasse operator++(int);

              double operator()(double expoente) const;

              int operator[](const UmaClasse& outro) const;

              UmaClasse& operator +=(const UmaClasse& outroObjeto);

              [[nodiscard]] auto operator<=>(const UmaClasse& objetoDaDireita) const = default;

              UmaClasse novo() const;
              UmaClasse novo(int valorDoMembro) const;
              UmaClasse novo(const UmaClasse& fonte) const;

              int obterDado() const;

              void altera(const UmaClasse& fonte);

              ~UmaClasse();

              friend std::istream& operator>>(std::istream &entrada, UmaClasse& objeto);

              friend std::ostream& operator<<(std::ostream &saida, const UmaClasse& objeto);

          private:
              void swap(UmaClasse& outro) noexcept;
              int* membroAlocado{ nullptr };
          };
        }
      }
    }
}
