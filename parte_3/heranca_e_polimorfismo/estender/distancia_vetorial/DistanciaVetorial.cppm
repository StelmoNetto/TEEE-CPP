export module DistanciaVetorial;

import <vector>;
import<ostream>;

export namespace Heranca::Estendendo::inline Exemplo
{
  using Vetor = std::vector<double>;

  std::ostream& operator<<(std::ostream &saida, const Vetor& vetor);

  class DistanciaVetorial
  {
   public:
    static double distancia(const Vetor& vetor1, const Vetor& vetor2);
  };
} //Fim do namespace
