#include "classe_derivada_final_nao_pode_ser_estendida.h"

class SegundaDerivacao : public DerivadaFinal
{
public:
 virtual double etapa2() const override
 {
    return 4;
 }
};

int main()
{
    SegundaDerivacao objeto; //Erro: SegundaDerivacao não existe
}
