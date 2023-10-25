#include <iostream>
#include <string>
#include <charconv>
using std::string, std::cout, std::endl;
using namespace std::string_literals;

int main()
{
    constexpr double Valor{ 0.314 };
    constexpr size_t TamanhoDaCadeia{ 50 };
    string cadeiaDeUmReal(TamanhoDaCadeia, ' ');

    auto resultadoDaConversao{ std::to_chars(cadeiaDeUmReal.data(), cadeiaDeUmReal.data() + cadeiaDeUmReal.size(), Valor) };

    if(resultadoDaConversao.ec == std::errc{})
    {
        cout << cadeiaDeUmReal << endl;
    }
}
