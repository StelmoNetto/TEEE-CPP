#include<iostream>
#include<memory>
using std::cin,std::cout, std::endl;

int main()
{
    auto deletorDeInt = [](int* ponteiro) {delete ponteiro; ponteiro = nullptr; };

    std::unique_ptr<int, decltype(deletorDeInt)> ponteiroComDeletor{ new int, deletorDeInt };
}
