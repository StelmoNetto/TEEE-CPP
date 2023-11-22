export module Base;

namespace Heranca
{
 namespace Sobrescrita
 {
  inline namespace Sintaxe
  {
    export class Base
    {
    public:
      Base();

      virtual ~Base() = default;

      Base(int valorInicial);

      virtual void alterarMembro(int valor);

      virtual int obterMembro() const;

      virtual double processamento() const;

    private:
      int membro{ 0 };
    }; //Fim de Base
  } //Fim de Sintaxe
 } //Fim de Sobrescrita
} //Fim de Heranca
