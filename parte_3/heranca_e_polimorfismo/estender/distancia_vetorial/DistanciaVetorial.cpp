module DistanciaVetorial;

import<cmath>;
import<ostream>;

namespace Heranca::Estendendo::inline Exemplo
{
 double DistanciaVetorial::distancia(const Vetor& vetor1, const Vetor& vetor2)
 {
  auto somatoriaDosQuadradosDasDiferencas{ 0.0 };

  for (auto iter{ vetor1.begin() }; auto e : vetor2)
   somatoriaDosQuadradosDasDiferencas += pow(*(iter++) - e, 2.0);

  return sqrt(somatoriaDosQuadradosDasDiferencas);
 }

 std::ostream& operator<<(std::ostream &saida, const Vetor& vetor)
 {
    saida << "[ ";
    for(auto e : vetor)
      saida << e << " ";
    saida << "]";

    return saida;
 }
}
