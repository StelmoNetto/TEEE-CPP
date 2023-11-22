#include "MetodoDaBissecao.h"

#include<cmath>
#include<iostream>
using std::cout;

MetodoDaBissecao::MetodoDaBissecao(ProblemaDeRaizes& problema, double xMin, double xMax, double tolerancia, size_t numeroMaximoDeIteracoes) :
BuscadorDeRaizes(problema,numeroMaximoDeIteracoes), _tolerancia{tolerancia}
{
  if (!funcaoMudaDeSinalNoIntervalo({ xMin }, { xMax }))
  {
    std::cout << "A funcao nao muda de sinal nos extremos.\n";
    exit(1);
  }

  auto funcao = _problema.funcao(SELETOR_DE_FUNCAO::FUNCAO);

  auto yMin{ funcao->avalie({xMin}) };
  auto yMax{ funcao->avalie({xMax}) };

  if (yMin < 0)
  {
    x1 = xMin;
    x2 = xMax;
    y1 = yMin;
    y2 = yMax;
  }
  else
  {
    x1 = xMax;
    x2 = xMin;
    y1 = yMax;
    y2 = yMin;
  }
} //Fim do construtor

double MetodoDaBissecao::obterAproximacao() const { return xMedio; }

bool MetodoDaBissecao::convergiu() const { return fabs(yMedio) < _tolerancia; }

void MetodoDaBissecao::facaAsEtapasDaIteracao(size_t n)
{
  if (yMedio < 0)
  {
    x1 = xMedio;
    y1 = yMedio;
  }
  else
  {
    x2 = xMedio;
    y2 = yMedio;
  }
}

void MetodoDaBissecao::facaNovaAproximacao()
{
  xAnterior = xMedio;

  xMedio = (x1 + x2) / 2.0;

  yMedio = _problema.funcao(SELETOR_DE_FUNCAO::FUNCAO)->avalie({ xMedio });
}

bool MetodoDaBissecao::verificaEstabilidadeDaSolucao() const
{
  return fabs(xMedio - xAnterior) < ERRO_MINIMO;
}
