#include <iostream>
using std::cin,std::cout, std::endl;

int main()
{
    //Única instrução nos blocos
    {
        auto valor1{2.1}, valor2{4.4};
        double maior;

        if(valor1 >= valor2)
          maior = valor1;
        else
          maior = valor2;

        cout << "maior = " << maior << endl;
    }

    //Múltiplas instruções nos blocos
    {
        auto potenciaDoAparelhoEmW{ 500.0 };
        auto tempoDeUsoDiarioEmH{3.5};

        auto comsumoDeEnergiaDiarioEmWH{ potenciaDoAparelhoEmW * tempoDeUsoDiarioEmH };

        bool emKHW{ true };

        cout << "Consumo de energia diário = ";

        if(emKHW)
        {
          auto comsumoDeEnergiaDiarioEmKWH{ comsumoDeEnergiaDiarioEmWH / 1000};
          cout << comsumoDeEnergiaDiarioEmKWH << " kWh" << endl;
        }
        else
          cout << comsumoDeEnergiaDiarioEmWH << " Wh" << endl;
    }
}
