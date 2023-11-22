#include "FuncaoDaSegundaAvaliacao.h"
#include "MetodoDaBissecao.h"

#include<memory>
#include<iostream>
using std::cout, std::endl;

int main()
{
 const int Unidimensional{ 1 };

 ProblemaDeRaizes problema{ std::make_shared<FuncaoDaSegundaAvaliacao>(Unidimensional,"x^5-x^4+7x^3-5x^2+4x-4"), nullptr };

 auto limiteInferior{ 0.7 };
 auto limiteSuperior{ 0.85 };
 auto tolerancia{ 1.E-6 };
 int numeroMaximoDeIteracoes{ 100 };

 BuscadorDeRaizes&& buscadorDeRaizes{ MetodoDaBissecao(problema,limiteInferior,limiteSuperior,tolerancia,numeroMaximoDeIteracoes) };

 do
 {
  buscadorDeRaizes.facaUmaEtapa();
 } while (!buscadorDeRaizes.convergiu());

 cout << "Aproximação da raiz =  " << buscadorDeRaizes.obterAproximacao() << endl;
}
