export module Derivada;
import Base;

namespace Heranca
{
 namespace Estendendo
 {
  inline namespace Sintaxe
  {
    export class Derivada : public Base
    {
    public:
      Derivada();

      Derivada(double valorDoNovoMembro, int valorDoMembroBase);

      double novoMetodo() const; //Ampliando a interface
    private:
      double novoMembro; //Adição de novas características, quando necessário
    }; //Fim de Derivada
  } //Fim de Sintaxe
 } //Fim de Estendendo
} //Fim de Heranca
