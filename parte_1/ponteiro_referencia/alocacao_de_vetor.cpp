#include<iostream>
using std::cin,std::cout, std::endl;

int main()
{
    int* vetor = new(std::nothrow) int[4]; //Vetor de 4 elementos. Espaço em bytes é 4 * sizeof(int)

    vetor[0] = 1;
    vetor[3] = 2;

    cout << "vetor[0] = " << vetor[0] << endl;
    cout << "vetor[3] = " << vetor[3] << endl;
}
