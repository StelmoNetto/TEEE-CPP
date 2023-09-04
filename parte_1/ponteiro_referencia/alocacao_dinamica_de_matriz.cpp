#include<iostream>
using std::cin,std::cout, std::endl;

int main()
{
    int numeroDeLinhas, numeroDeColunas, i;

    cout << "Entre com o numero de linhas e colunas da matriz a ser alocada\n";
    cin >> numeroDeLinhas >> numeroDeColunas;

    int** matriz; //Ponteiro para ponteiro(s)

    //1ª etapa é a alocação das linhas: Um vetor de elementos ponteiro.
    matriz = new int*[numeroDeLinhas];

    //2ª etapa: Para cada linha, um vetor de tamanho numeroDeColunas é alocado.
    for (i = 0; i < numeroDeLinhas; ++i)
      matriz[i] = new int[numeroDeColunas];

    //Fazer alguma coisa com a matriz numeroDeLinhas x numeroDeColunas alocada

    //Desalocando a matriz.
    //1º é desalocado os vetores de cada linha.
    for (i = 0; i < numeroDeLinhas; ++i)
      delete [] matriz[i];

    //Só então é desalocado o vetor de ponteiros.
    delete [] matriz;
    matriz = nullptr;
}
