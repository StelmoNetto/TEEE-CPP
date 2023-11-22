
namespace Heranca
{
    class Base
    {
    public:
      Base();

      virtual ~Base() = default;

      Base(int valorInicial);

      virtual void alterarMembro(int valor);

      virtual int obterMembro() const;

      virtual double processamento() const;

    protected:
      int membro{ 0 };
    }; //Fim de Base
} //Fim de Heranca
