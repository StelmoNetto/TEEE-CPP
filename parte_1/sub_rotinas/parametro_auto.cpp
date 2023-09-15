#include<iostream>
using namespace std::literals;
using std::cin, std::cout, std::endl;

void exibir(const auto& parametro)
{
    cout << parametro << endl;
}

int main()
{
    exibir(2);

    float variavel{ 2.5f };
    exibir(variavel);

    auto cadeia{ "string "s };
    exibir(cadeia);
}
