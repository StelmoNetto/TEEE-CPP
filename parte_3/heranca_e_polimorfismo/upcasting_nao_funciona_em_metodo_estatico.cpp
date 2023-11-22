#include<vector>
#include<string_view>
#include<cmath>
#include<iostream>
using std::cout, std::endl;

using Vetor = std::vector<double>;
class DistanciaVetorial
{
  public:
    static double distancia(const Vetor& vetor1, const Vetor& vetor2)
    {
      auto somatoriaDosQuadradosDasDiferencas{ 0.0 };

      for (auto iter{ vetor1.begin() }; auto e : vetor2)
        somatoriaDosQuadradosDasDiferencas += pow(*(iter++) - e, 2.0);

      return sqrt(somatoriaDosQuadradosDasDiferencas);
    }
};

class DistanciaEntreCadeias : public DistanciaVetorial
{
 public:
  static double distancia(std::string_view cadeia1, std::string_view cadeia2)
  {
    auto v1{ converte(cadeia1) }, v2{ converte(cadeia2) };
    return DistanciaVetorial::distancia(v1,v2);
  }

 private:
  static Vetor converte(std::string_view cadeia)
  {
    Vetor vetor(cadeia.size());

    for (auto iter{ vetor.begin() }; auto caracter : cadeia)
      *(iter++) = static_cast<double>(caracter);

    return vetor;
  }
};

int main()
{
 DistanciaEntreCadeias calculadorDeDistancias;

 DistanciaVetorial& refParaDistanciaEntreCadeias{ calculadorDeDistancias };

 auto distancia{ refParaDistanciaEntreCadeias.distancia("String1","String2") }; //Chama a implementação de DistanciaVetorial

 cout << "distancia = " << distancia << endl;
}
