#include <iostream>
#include <vector>
using std::vector, std::cout, std::endl;

int main()
{
    vector vetor{ 2.1,1.0,3.2 };

    for (auto iTer = vetor.rbegin(); iTer != vetor.rend(); ++iTer)
	    cout << "Valor: " << *iTer << endl;
}
