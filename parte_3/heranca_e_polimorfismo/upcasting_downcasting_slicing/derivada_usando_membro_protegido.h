#include "base_com_membro_protegido.h"

namespace Heranca
{
    class Derivada : public Base
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
} //Fim de Heranca
