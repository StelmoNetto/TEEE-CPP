#include <iostream>
#include <vector>
using std::vector, std::cout, std::endl;

int main()
{
    vector vetor{ 2.1,1.0,3.2 };

    for (auto i = 0; i < vetor.size(); ++i)
        cout << "Valor: " << vetor.at(i) << endl;
}
