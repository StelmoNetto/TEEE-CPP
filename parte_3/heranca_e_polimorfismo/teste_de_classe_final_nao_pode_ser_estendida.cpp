#include "classe_final_nao_pode_ser_estendida.h"

class Derivada : public Base
{
public:
 virtual double etapa2() const override final //Indica que a herança a partir de Derivada, esse método não pode ser sobrescrito
 {
    return 3;
 }

private:
 double novoMembro{};
};

int main()
{
    //Nada aqui propositalmente
}
