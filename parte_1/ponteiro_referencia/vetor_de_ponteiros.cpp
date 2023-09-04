#include<iostream>
using std::cin,std::cout, std::endl;

int main()
{
    int var = 2;

    //Criando um vetor de ponteiros. Então cada elemento é um ponteiro.
    int* vetorDePonteiros[3];

    //Cada posição do vetor, que é um ponteiro, aponta para a mesma variável.
    vetorDePonteiros[0] = &var;
    vetorDePonteiros[1] = &var;
    vetorDePonteiros[2] = &var;

    cout << *vetorDePonteiros[0] << " " << *vetorDePonteiros[1] << " " << *vetorDePonteiros[2];
}
