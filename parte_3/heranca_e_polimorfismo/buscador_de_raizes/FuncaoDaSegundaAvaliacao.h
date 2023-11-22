#pragma once

#include "FuncaoAvaliavel.h"

#include<cmath>

class FuncaoDaSegundaAvaliacao : public Funcao
{
public:
 FuncaoDaSegundaAvaliacao(size_t dimensao, std::string expressao) : Funcao{ dimensao, expressao } {}

 virtual double avalie(const DominioVetoral& x) const override
 {
  return pow(x[0], 5) - pow(x[0], 4) + 7 * pow(x[0], 3) - 5 * pow(x[0], 2) + 4 * x[0] - 4;
 }
};
