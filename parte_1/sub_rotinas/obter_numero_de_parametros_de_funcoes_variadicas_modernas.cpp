#include <iostream>
using std::cin, std::cout, std::endl;

template<typename... Tipos>
void exibeNumeroDeParametrosVariados(const Tipos&... args)
{
    const auto NumeroDeParametros{ sizeof...(Tipos) };
    
    cout << "Numero de parâmetros = " << NumeroDeParametros << endl;
}

int main()
{
    exibeNumeroDeParametrosVariados('a',false,1,2.1);
}
