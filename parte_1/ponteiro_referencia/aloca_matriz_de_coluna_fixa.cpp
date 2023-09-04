#include<iostream>
using std::cin,std::cout, std::endl;

int main()
{
    //Exemplo de alocação dinâmica com número de colunas constante, mas o número de linhas é definido em tempo de execução.

    const int NumeroDeColunas { 3 };
    int numeroDeLinhas, i;

    cout << "Entre com o numero de linhas da matriz a ser alocada\n";
    cin >> numeroDeLinhas;

    float (*matriz)[NumeroDeColunas]; //Ponteiro para um vetor de NumeroDeColunas elementos.
    matriz = new float[numeroDeLinhas][NumeroDeColunas]; //Um vetor de elementos vetores com NumeroDeColunas elementos

    //Fazer alguma coisa com a matriz numeroDeLinhas x NumeroDeColunas alocada

    //Desalocando a matriz.
    delete [] matriz;
}
