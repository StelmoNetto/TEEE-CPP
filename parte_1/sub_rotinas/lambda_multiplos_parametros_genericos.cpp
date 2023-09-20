#include<iostream>
#include<string>
using std::cin, std::cout, std::endl;
using namespace std::literals;

int main()
{
    auto funcao{ [](const auto& parametro1, const auto& parametro2) {} };

    funcao(1,"cadeia"s);
}
