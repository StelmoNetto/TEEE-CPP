#include "BuscadorDeRaizes.h"

BuscadorDeRaizes::BuscadorDeRaizes(ProblemaDeRaizes& problema, size_t numeroMaximoDeIteracoes) : _problema{problema}, numeroDeIteracoesMaximo{numeroMaximoDeIteracoes}{}

bool BuscadorDeRaizes::funcaoMudaDeSinalNoIntervalo(const DominioVetorial& x1, const DominioVetorial& x2)
{
  auto funcao = _problema.funcao(SELETOR_DE_FUNCAO::FUNCAO);

  auto y1 = funcao->avalie(x1);
  auto y2 = funcao->avalie(x2);

  return (y1 * y2 < 0);
}

void BuscadorDeRaizes::facaUmaEtapa() //Tem-se um fluxo bem definido para a solução do problema de determinação de raízes. Entretanto, as etapas desse fluxo só serão definidas nas classes filhas, pois depende de cada método implementado nelas.
{
  if (!ultrapassouNumeroMaximoDeIteracoes())
  {
    facaNovaAproximacao();
    facaAsEtapasDaIteracao(numeroDeIteracoes);
    ++numeroDeIteracoes;
  }
}

size_t BuscadorDeRaizes::obterNumeroDeIteracoes() const { return numeroDeIteracoes; }

bool BuscadorDeRaizes::ultrapassouNumeroMaximoDeIteracoes() const
{
  return numeroDeIteracoes > numeroDeIteracoesMaximo;
}

void BuscadorDeRaizes::reiniciarContagemDeIteracoes() { numeroDeIteracoes = 0; }
