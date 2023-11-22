#include "ProblemaDeRaizes.h"

ProblemaDeRaizes::ProblemaDeRaizes(Funcao::Ponteiro funcao, Funcao::Ponteiro derivada) : _funcao{funcao},_derivada{derivada}{}

Funcao::Ponteiro ProblemaDeRaizes::funcao(SELETOR_DE_FUNCAO sel)
{
  switch (sel)
  {
    case ProblemaDeRaizes::SELETOR_DE_FUNCAO::FUNCAO:
      return _funcao;

    case ProblemaDeRaizes::SELETOR_DE_FUNCAO::DERIVADA:
      return _derivada;
  }
}
