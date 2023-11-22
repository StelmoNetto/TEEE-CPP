#include "derivada_com_metodo_final.h"

class SegundaDerivacao : public Derivada
{
public:
 virtual double etapa2() const override
 {
    return 4;
 }
};

int main()
{
    SegundaDerivacao objeto;
}
