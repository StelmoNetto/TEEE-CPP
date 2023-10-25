#include <iostream>
#include <vector>
using std::vector, std::cout, std::endl;

int main()
{
    vector vetor{ 2.1,1.0,3.2 };

    cout << "Vazio? " << vetor.empty() << "\n";

    vetor.resize(0);

    cout << "Vazio? " << vetor.empty() << "\n";
}
