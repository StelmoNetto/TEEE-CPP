#include "derivada_com_metodo_final.h"

#include <iostream>

using std::cout, std::endl;

class SegundaDerivacao : public Derivada
{
public:
 virtual double etapa1() const override
 {
    return 0.5;
 }
};

int main()
{
    SegundaDerivacao objeto;

    cout << "etapa1() + etapa2() = 0.5 + 3 = " << objeto.processamento();
}
