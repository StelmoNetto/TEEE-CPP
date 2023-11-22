module DistanciaVetorialDeStrings;

import<cmath>;
import <vector>;
import <string_view>;

namespace Heranca::Estendendo::inline Exemplo
{
 double DistanciaEntreCadeias::distancia(std::string_view cadeia1, std::string_view cadeia2)
 {
  auto v1{ converte(cadeia1) }, v2{ converte(cadeia2) };
  return DistanciaVetorial::distancia(v1,v2);
 }

 Vetor DistanciaEntreCadeias::converte(std::string_view cadeia)
 {
  Vetor vetor(cadeia.size());

  for (auto iter{ vetor.begin() }; auto caracter : cadeia)
   *(iter++) = static_cast<double>(caracter);

  return vetor;
 }
} //Fim do namespace
