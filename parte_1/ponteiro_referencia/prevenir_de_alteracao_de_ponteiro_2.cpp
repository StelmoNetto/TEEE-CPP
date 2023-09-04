#include<iostream>
using std::cin,std::cout, std::endl;

int main()
{
    int vetor[]{ 3,4,5 };

    int* const apenasPtrConst = vetor; // ponteiro constante

    apenasPtrConst[0] = 2; // permite alteração dos elementos

    apenasPtrConst = nullptr; // Erro: não pode alterar o valor do ponteiro
}
