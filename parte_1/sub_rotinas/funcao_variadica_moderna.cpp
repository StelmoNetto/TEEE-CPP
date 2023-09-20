#include <iostream>
using std::cin, std::cout, std::endl;

void exibeNaLinhaParametrosVariados(){} //Finalidade de parar a recursão

template<typename T1, typename... Tipos>
void exibeNaLinhaParametrosVariados(const T1& arg1, const Tipos&... args)
{        
    cout << arg1 << endl;
    exibeNaLinhaParametrosVariados(args...);
}

int main()
{
    exibeNaLinhaParametrosVariados('a',false,1,2.1);
}
