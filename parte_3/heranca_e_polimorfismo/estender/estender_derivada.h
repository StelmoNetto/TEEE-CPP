#pragma once

#include "estender_base.h"

namespace Heranca
{
 namespace Estendendo
 {
  inline namespace Sintaxe
  {
    class Derivada : public Base //Herança pública que aproveita a interface já criada na classe Base
    {
    public:
      Derivada();

      Derivada(double valorDoNovoMembro, int valorDoMembroBase);

      double novoMetodo() const; //Ampliando a interface

    private:
      double novoMembro; //Adição de novas características, quando necessário
    };
  } //Fim de Sintaxe
 } //Fim de Estendendo
} //Fim de Heranca
