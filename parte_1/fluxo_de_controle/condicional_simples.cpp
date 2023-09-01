#include <iostream>
using std::cin,std::cout, std::endl;

int main()
{
    //Condicional simples com um única linha
    {
      float tensaoDoCircuito, resistenciaEmOhm;

      cout << "Entre com a tensão da fonte em Volts\n";
      cin >> tensaoDoCircuito;

      cout << "Entre com a resistência em Volts\n";
      cin >> resistenciaEmOhm;

      float correnteDoCircuitoEmA{};

      if (resistenciaEmOhm > 0)
        correnteDoCircuitoEmA = tensaoDoCircuito / resistenciaEmOhm;

      cout << "Corrente do circuito = " << correnteDoCircuitoEmA << " A\n";
    }

    //Condicional simples com mais de uma linha
    {
      const auto CORRENTE_MAXIMA_DO_FUSIVEL_EM_AMPERE{ 5.1 };

      auto tensaoNoCircuitoEmV = 10.0;
      auto r1EmOhm = 1.0, r2EmOhm = 1.0;

      auto resistenciaEquivalente = r1EmOhm + r2EmOhm;

      if(resistenciaEquivalente <= 0)
      {
        cout << "Não é possível calcular a corrente do circuito: \n Resistência equivalente <= 0\n";
        return 1;
      }

      auto correnteDoCircuitoEmA = tensaoNoCircuitoEmV / resistenciaEquivalente;

      if (correnteDoCircuitoEmA < CORRENTE_MAXIMA_DO_FUSIVEL_EM_AMPERE)
      {
          auto tensaoDeR1EmV{ correnteDoCircuitoEmA * r1EmOhm };
          auto tensaoDeR2EmV{ correnteDoCircuitoEmA * r2EmOhm };
      }
    }
}
