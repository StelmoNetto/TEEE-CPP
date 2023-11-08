#include "adicao_binaria_de_contracao.h"

#include <iostream>
using std::cout, std::endl, std::cin;

namespace Classes
{
    inline namespace SobrecargaDeOperadores
    {
      inline namespace Binario
      {
        inline namespace ComMetodo
        {
          UmaClasse::UmaClasse() : membroAlocado{ new int{} } { cout << "Objeto criado e alocando membros " << membroAlocado << "\n"; }

          UmaClasse::UmaClasse(int n) : membroAlocado{ new int{n} } { cout << "Objeto criado e alocando membros " << membroAlocado << "\n"; }

          UmaClasse::UmaClasse(const UmaClasse& outro) : membroAlocado{ new int{ *outro.membroAlocado } }
          {
              cout << "Objeto criado, alocando e copiando membros " << membroAlocado << "\n";
          }

          UmaClasse::UmaClasse(UmaClasse&& outro) noexcept : membroAlocado{ outro.membroAlocado }
          {
              cout << "Objeto criado, alocando e movimentando membros " << membroAlocado << "\n";
              outro.membroAlocado = nullptr;
          }

          void UmaClasse::swap(UmaClasse& outro) noexcept
          {
              std::swap(this->membroAlocado,outro.membroAlocado);
          }

          UmaClasse& UmaClasse::operator=(const UmaClasse& objetoDaDireita)
          {
            if(this != &objetoDaDireita)
            {
              UmaClasse temp{ objetoDaDireita }; //cópia para um objeto não const
              swap(temp);
            }
            return *this;
          }

          UmaClasse& UmaClasse::operator=(UmaClasse&& objetoDaDireita) noexcept
          {
              if (this != &objetoDaDireita)
              {
                  cout << "Atribuicao com movimento de " << &objetoDaDireita << " para " << this << "\n";

                  UmaClasse temp{ std::move(objetoDaDireita) };

                  swap(temp);
              }
              return *this;
          }

          UmaClasse& UmaClasse::operator +=(const UmaClasse& outroObjeto)
          {
              altera(obterDado() + outroObjeto.obterDado());

              return *this;
          }

          UmaClasse UmaClasse::novo() const { return UmaClasse{}; }
          UmaClasse UmaClasse::novo(int valorDoMembro) const { UmaClasse novoObjeto{ valorDoMembro }; return novoObjeto; }
          UmaClasse UmaClasse::novo(const UmaClasse& obj) const { return obj; }

          int UmaClasse::obterDado() const { return (membroAlocado) ? *membroAlocado : -1; }

          void UmaClasse::altera(const UmaClasse& fonte) { *membroAlocado = *fonte.membroAlocado; }

          UmaClasse::~UmaClasse()
          {
              cout << "Objeto destruido e desalocando membros " << membroAlocado << "\n";
              delete membroAlocado;
          }

          const UmaClasse operator+(const UmaClasse& primOp, const UmaClasse& segOp)
          {
            return UmaClasse{ primOp.obterDado() + segOp.obterDado() };
          }
        }
      }
    }
}
