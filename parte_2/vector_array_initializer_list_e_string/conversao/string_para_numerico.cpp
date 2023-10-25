#include <iostream>
#include <string>
#include <charconv>
using std::string, std::cout, std::endl;
using namespace std::string_literals;

int main()
{
    constexpr double Valor1{ 0.3146 };
    const size_t TamanhoDaCadeia{ 50 };
    string cadeiaDeUmReal(TamanhoDaCadeia, ' ');

    auto resultadoDaConversao{ std::to_chars(cadeiaDeUmReal.data(), cadeiaDeUmReal.data() + cadeiaDeUmReal.size(), Valor1) };

    if (resultadoDaConversao.ec == std::errc{})
        cout << cadeiaDeUmReal << endl;

    double valor2;
    auto resultadoDaConversao2{ std::from_chars(cadeiaDeUmReal.data(), cadeiaDeUmReal.data() + cadeiaDeUmReal.size(), valor2) };

    if (resultadoDaConversao2.ec == std::errc{})
    {
        if (Valor1 == valor2)
        {
            cout << "Arredondamento perfeito" << endl;
        }
        else
        {
            cout << "Nenhum arredondamento perfeito?!?" << endl;
        }
    }
}
