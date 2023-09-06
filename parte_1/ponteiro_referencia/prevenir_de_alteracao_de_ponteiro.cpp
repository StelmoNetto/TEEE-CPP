#include<iostream>
using std::cin,std::cout, std::endl;

int main()
{
    int vetor[]{ 3,4,5 };

    int const* const ptrConstanteDeConstantesInteiras = vetor;

    ptrConstanteDeConstantesInteiras = nullptr; //Erro: não pode alterar o valor do ponteiro

    ptrConstanteDeConstantesInteiras[0] = 2; //Erro: não pode alterar os elementos do vetor
}
