export module Base;

namespace Heranca
{
 namespace Estendendo
 {
  inline namespace Sintaxe
  {
    export class Base
    {
    public:
      Base();

      Base(int valorInicial);

      void alterarMembro(int valor);

      int obterMembro() const;

      double processamento() const;

    private:
      int membro{ 0 };
    }; //Fim de Base
  } //Fim de Sintaxe
 } //Fim de Estendendo
} //Fim de Heranca
