#include <iostream>
#include <vector>
using std::vector, std::cout, std::endl;

int main()
{
    vector vetor{ 2.1,1.0,3.2 };

    vetor.resize(1); //size = 1 (apenas o elem. 2.1) e capacity = 3
    cout << "Tamanho = " << vetor.size() << "\n";
    cout << "Capacidade = " << vetor.capacity() << "\n";

    vetor.reserve(10); //size = 1 e capacity = 10
    cout << "Tamanho = " << vetor.size() << "\n";
    cout << "Capacidade = " << vetor.capacity() << "\n";
}
