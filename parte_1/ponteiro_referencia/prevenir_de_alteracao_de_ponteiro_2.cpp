#include<iostream>
using std::cin,std::cout, std::endl;

int main()
{
    int vetor[]{ 3,4,5 };

    int* const apenasPtrConstante = vetor; // ponteiro constante

    apenasPtrConstante[0] = 2; // permite alteração dos elementos

    apenasPtrConstante = nullptr; // Erro: não pode alterar o valor do ponteiro
}
