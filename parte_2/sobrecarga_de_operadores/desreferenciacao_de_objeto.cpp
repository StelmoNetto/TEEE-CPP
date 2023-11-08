#include "desreferenciacao_de_objeto.h"

#include <iostream>
#include <numeric>
#include <cmath>
using std::cout, std::endl, std::cin;

namespace Classes
{
    inline namespace SobrecargaDeOperadores
    {
      inline namespace Binario
      {
        inline namespace ComMetodo
        {
          UmaClasse::UmaClasse() : membroAlocado{ new int{} } { }

          UmaClasse::UmaClasse(int n) : membroAlocado{ new int{n} } { }

          UmaClasse::UmaClasse(const UmaClasse& outro) : membroAlocado{ new int{ *outro.membroAlocado } } { }

          UmaClasse::UmaClasse(UmaClasse&& outro) noexcept : membroAlocado{ outro.membroAlocado }
          {
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

          int UmaClasse::operator!() const
          {
            return std::numeric_limits<int>::max() - *this->membroAlocado;
          }

          int UmaClasse::operator()() const { return *membroAlocado; }

          UmaClasse& UmaClasse::operator++()
          {
            ++(*this->membroAlocado);

            return *this;
          }

          UmaClasse UmaClasse::operator++(int) //Parâmetro falso, para diferenciar do pré-fixado
          {
            UmaClasse estadoAntigo{ *this };

            ++(*this);

            return estadoAntigo;
          }

          int UmaClasse::operator*() const { return *membroAlocado; }

          double UmaClasse::operator()(double expoente) const { return std::pow(*membroAlocado, expoente); }

          int UmaClasse::operator[](const UmaClasse& outroObjeto) const
          {
            return *this->membroAlocado + *outroObjeto.membroAlocado;
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
              delete membroAlocado;
          }

          std::istream& operator>>(std::istream &entrada, UmaClasse& objeto)
          {
              int valor;
              entrada >> valor;
              *objeto.membroAlocado = valor;

              return entrada;
          }

          std::ostream& operator<<(std::ostream &saida, const UmaClasse& objeto)
          {
              saida << *objeto.membroAlocado;

              return saida;
          }

          const UmaClasse operator+(const UmaClasse& op1, const UmaClasse& op2)
          {
            cout << op1 << " + " << op2 << " = ";
            return UmaClasse{ *op1.membroAlocado + *op2.membroAlocado };
          }

          const UmaClasse operator+(const UmaClasse& op1, int valor)
          {
            cout << op1 << " + " << valor << " = ";
            return UmaClasse{ *op1.membroAlocado + valor };
          }

          const UmaClasse operator+(int valor, const UmaClasse& op2)
          {
            cout << valor << " + " << op2 << " = ";
            return UmaClasse{ valor + *op2.membroAlocado };
          }
        }
      }
    }
}
