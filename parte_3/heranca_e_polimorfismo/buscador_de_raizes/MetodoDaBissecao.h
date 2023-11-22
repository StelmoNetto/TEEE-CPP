#pragma once

#include "BuscadorDeRaizes.h"

class MetodoDaBissecao : public BuscadorDeRaizes
{
public:
 MetodoDaBissecao(ProblemaDeRaizes& problema, double xMin, double xMax, double tolerancia, size_t numeroMaximoDeIteracoes);

 virtual double obterAproximacao() const override;

 virtual bool convergiu() const override;

 virtual ~MetodoDaBissecao() = default;

protected:
 virtual void facaAsEtapasDaIteracao(size_t n) override;

 virtual void facaNovaAproximacao() override;

 virtual bool verificaEstabilidadeDaSolucao() const override;

private:
 const double ERRO_MINIMO{ 1.E-15 };

 double _tolerancia{};

 double xAnterior{}, x1{}, xMedio{}, x2{};

 double y1{}, yMedio{}, y2{};
}; //Fim de MetodoDaBissecao
