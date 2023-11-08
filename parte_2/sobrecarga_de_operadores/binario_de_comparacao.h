#pragma once

namespace Classes
{
    inline namespace SobrecargaDeOperadores
    {
      inline namespace Binario
      {
        inline namespace ComFuncaoGlobal
        {
          class UmaClasse; //Declaração antecipada

          const UmaClasse operator+(const UmaClasse& primeiroOperando, const UmaClasse& segundoOperando);

          [[nodiscard]] bool operator==(const UmaClasse& objetoDaEsquerda, const UmaClasse& objetoDaDireita);

          class UmaClasse
          {
          public:
              UmaClasse();

              UmaClasse(int valorDoMembro);

              UmaClasse(const UmaClasse& outro);

              UmaClasse(UmaClasse&& outro) noexcept;

              UmaClasse& operator=(const UmaClasse& objetoDaDireita);

              UmaClasse& operator=(UmaClasse&& objetoDaDireita) noexcept;

              UmaClasse& operator +=(const UmaClasse& outroObjeto);

              UmaClasse novo() const;
              UmaClasse novo(int valorDoMembro) const;
              UmaClasse novo(const UmaClasse& fonte) const;

              int obterDado() const;

              void altera(const UmaClasse& fonte);

              ~UmaClasse();
          private:
              void swap(UmaClasse& outro) noexcept;
              int* membroAlocado{ nullptr };
          };
        }
      }
    }
}
