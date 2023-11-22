#pragma once

#include "base_abstrata.h"

class Derivada : public Base
{
public:
 Derivada(double valorInicial, int valorDoMembroBase);

 virtual ~Derivada() = default;

protected:
 virtual double etapa1() const override; //Deve ser implementada para a classe ser concreta

 virtual double etapa2() const override; //Deve ser implementada para a classe ser concreta

 double novoMembro{};
};
