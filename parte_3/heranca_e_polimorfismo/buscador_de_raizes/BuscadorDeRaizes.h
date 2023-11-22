#pragma once

#include "ProblemaDeRaizes.h"

class BuscadorDeRaizes
{
public:
 using SELETOR_DE_FUNCAO = ProblemaDeRaizes::SELETOR_DE_FUNCAO;
 using DominioVetorial = Avaliavel::DominioVetoral;

 BuscadorDeRaizes(ProblemaDeRaizes& problema, size_t numeroMaximoDeIteracoes);

 virtual ~BuscadorDeRaizes() = default;

 bool funcaoMudaDeSinalNoIntervalo(const DominioVetorial& x1, const DominioVetorial& x2);

 virtual double obterAproximacao() const = 0;

 virtual void facaUmaEtapa();

 size_t obterNumeroDeIteracoes() const;

 virtual bool convergiu() const = 0;

protected:
 bool ultrapassouNumeroMaximoDeIteracoes() const;

 void reiniciarContagemDeIteracoes();

//Serão implementados e de uso interno apenas nas classes derivadas dessa
 virtual void facaAsEtapasDaIteracao(size_t n) = 0;
 virtual void facaNovaAproximacao() = 0;
 virtual bool verificaEstabilidadeDaSolucao() const = 0;

 ProblemaDeRaizes& _problema;

private:
 size_t numeroDeIteracoes{}, numeroDeIteracoesMaximo{};
}; //Fim de BuscadorDeRaizes
