#include <iostream>
#include <string>
#include <charconv>
using std::string, std::cout, std::endl;
using namespace std::string_literals;

int main()
{
    constexpr int Inteiro { 12345 };
    constexpr size_t TamanhoDaCadeia{ 50 };
    string cadeiaDeUmInteiro(TamanhoDaCadeia, ' ');

    auto resultadoDaConversao{ std::to_chars(cadeiaDeUmInteiro.data(), cadeiaDeUmInteiro.data() + cadeiaDeUmInteiro.size(), Inteiro) };

    if(resultadoDaConversao.ec == std::errc{})
    {
        cout << cadeiaDeUmInteiro << endl;
    }
}
