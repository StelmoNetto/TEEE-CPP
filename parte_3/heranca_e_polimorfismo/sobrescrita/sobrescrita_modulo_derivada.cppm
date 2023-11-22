export module Derivada;

import Base;

namespace Heranca
{
 namespace Sobrescrita
 {
  inline namespace Sintaxe
  {
    export class Derivada : public Base
    {
    public:
      Derivada();

      Derivada(double valorDoNovoMembro, int valorDoMembroBase);

      virtual ~Derivada() = default;

      virtual double obterNovoMembro() const; //Ampliando a interface

      virtual double processamento() const override; //Redefinição de método da base

    private:
      double novoMembro; //Adição de novas características, quando necessário
    }; //Fim de Derivada
  } //Fim de Sintaxe
 } //Fim de Sobrescrita
} //Fim de Heranca
