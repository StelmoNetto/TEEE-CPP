export module DistanciaVetorialDeStrings;

import DistanciaVetorial;

import <string_view>;

export namespace Heranca::Estendendo::inline Exemplo
{
  class DistanciaEntreCadeias : public DistanciaVetorial
  {
   public:
    static double distancia(std::string_view cadeia1, std::string_view cadeia2);

   private:
    static Vetor converte(std::string_view cadeia);
  };
} //Fim do namespace
