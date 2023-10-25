#include <iostream>
#include <vector>
using std::vector, std::cout, std::endl;

int main()
{
    vector vetor{ 2.1,1.0,3.2 };

    vetor.clear();

    cout << "Tamanho = " << vetor.size() << "\n";
    cout << "Capacidade = " << vetor.capacity() << "\n";
}
