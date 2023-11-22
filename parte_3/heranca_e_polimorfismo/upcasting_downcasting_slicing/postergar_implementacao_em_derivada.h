#pragma once

#include "postergar_implementacao_com_metodos_virtuais_da_base.h"

class Derivada : public Base
{
public:
 Derivada(double valor, int valDeMembro);

 virtual ~Derivada() = default;

protected:
 virtual double etapa1() const override; //Não necessário colocar novamente a palavra virtual, mas é uma boa ideia indica-la

 virtual double etapa2() const override;

 double novoMembro;
};
