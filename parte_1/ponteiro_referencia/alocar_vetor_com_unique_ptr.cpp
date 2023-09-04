#include<iostream>
#include<memory>
using std::cin,std::cout, std::endl, std::make_unique, std::unique_ptr;

int main()
{
    int tamanhoDoVetor;

    //Atribui via teclado o número máximo de elementos do vetor
    cout << "Entre com a quantidade de elementos do vetor\n";
    cin >> tamanhoDoVetor;

    // smart pointer para o vetor de inteiros, inicializados com o valor default (padrão): zero.
    auto dados = make_unique<int[]>(tamanhoDoVetor);

    //Atribuindo valores
    for (int i = 0; i < tamanhoDoVetor; i++)
    {
        cout << "Entre com o valor do elemento[" << i+1 <<"]: ";
        cin >> dados[i];
    }

    //Exibindo os elementos do vetor
    cout << "Os elementos do vetor são:\n";
    for (int i = 0; i < tamanhoDoVetor; i++)
      cout << dados[i] << endl;
} //Desaloca o vetor dados, automaticamente, ao término do programa
