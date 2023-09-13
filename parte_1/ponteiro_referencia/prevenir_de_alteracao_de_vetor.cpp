#include<iostream>
using std::cin,std::cout, std::endl;

int main()
{
    int vetor[]{ 3,4,5 };

    const int* ptrParaInteirosConstantes = vetor; //Ou: int const* ptrParaInteirosConstantes = vetor;

    ptrParaInteirosConstantes[0] = 2; // Erro: não pode alterar os elementos do vetor
}
