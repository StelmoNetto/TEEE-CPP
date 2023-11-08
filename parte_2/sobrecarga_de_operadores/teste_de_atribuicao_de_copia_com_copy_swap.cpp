#include "atribuicao_de_copia_com_copy_swap.h"

#include <iostream>
using std::cout, std::endl, std::cin;

int main()
{
    using namespace Classes;

    UmaClasse objetoEsquerdo{ 3 }, objetoDireito{ 2 };

    objetoEsquerdo = objetoDireito;

    cout << "objetoEsquerdo = " << objetoEsquerdo.obterDado() << endl;

    objetoEsquerdo.operator=(objetoDireito); //Chamada explícita do mesmo operador acima
}
