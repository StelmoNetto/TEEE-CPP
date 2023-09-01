#include <iostream>
using std::cin,std::cout, std::endl;

int main()
{
    const int BANDEIRA_VERDE = 0;
    const int BANDEIRA_AMARELA = 1;
    const int BANDEIRA_VERMELHA_1 = 2;
    const int BANDEIRA_VERMELHA_2 = 3;
    const int BANDEIRA_PRETA = 4;

    int bandeiraTarifaria;
    float consumoDeEnergiaEmW, tarifaDeEnergiaEmReais{ 0.67099 };

    cout << "Este programa calcula o valor da conta de energia para uma bandeira tarifária\n\n";

    cout << "Entre com o consumo de energia\n";
    cin >> consumoDeEnergiaEmW;

    cout << "Entre com o inteiro correspondente a uma das opções da bandeira tarifária abaixo:\n";
    cout << "0 - Verde\t1 - Amarela\t2 - Vermelha patamar 1\t3 - Vermelha patamar 2\t4 - Preta\n";
    cin >> bandeiraTarifaria;

    float adicionalDeBanderia;

    switch(bandeiraTarifaria)
    {
        case BANDEIRA_VERDE:
          adicionalDeBanderia = 0.0F;
        break;

        case BANDEIRA_AMARELA:
          adicionalDeBanderia = 0.01874f;
        break;

        case BANDEIRA_VERMELHA_1:
          adicionalDeBanderia = 0.03971f;
        break;

        case BANDEIRA_VERMELHA_2:
          adicionalDeBanderia = 0.09492F;
        break;

        case BANDEIRA_PRETA:
          adicionalDeBanderia = 0.142F;
        break;

        default:
          cout << "Bandeira tarifária selecionada não existe.\nFinalizando\n";
          return 1;
    }

    auto valorDaContaDeEnergiaEmReais = consumoDeEnergiaEmW * (tarifaDeEnergiaEmReais + adicionalDeBanderia );

    cout << "O valor da conta de energia = " << valorDaContaDeEnergiaEmReais << endl;
}
