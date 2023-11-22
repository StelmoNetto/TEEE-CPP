#pragma once

namespace Heranca
{
 namespace Estendendo
 {
  inline namespace Sintaxe
  {
    class Base
    {
    public:
      Base() = default;

      Base(int valor);

      void alterarMembro(int valor);

      int obterMembro() const;

      double processamento() const;
    private:
      int membro{ 0 };
    }; //Fim de Base
  } //Fim de Sintaxe
 } //Fim de Estendendo
} //Fim de Heranca
