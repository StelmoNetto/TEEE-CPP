#pragma once

#include "FuncaoAvaliavel.h"

class ProblemaDeRaizes
{
public:
 enum class SELETOR_DE_FUNCAO { FUNCAO, DERIVADA };

 ProblemaDeRaizes(Funcao::Ponteiro funcao, Funcao::Ponteiro derivada);

 virtual Funcao::Ponteiro funcao(SELETOR_DE_FUNCAO sel);

 ~ProblemaDeRaizes() = default;

private:
 Funcao::Ponteiro _funcao, _derivada;
};
