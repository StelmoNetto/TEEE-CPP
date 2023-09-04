#include<iostream>
using std::cin,std::cout, std::endl;

int main()
{
    int vetor[]{ 3,4,5 };

    int const* const ptrConstVetor = vetor;

    ptrConstVetor = nullptr; //Erro: não pode alterar o valor do ponteiro
}
