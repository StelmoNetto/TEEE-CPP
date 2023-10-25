#include <iostream>
#include <array>
using std::array, std::cout, std::endl;

int main()
{
    array<double, 2> vetor{ 2.1,3.4 };

    for(auto v: vetor)
        cout << "elemento: " << v << "\n";

    array ivetor{ 2,1 }; //O compilador já deduz o tipo e o número de elementos
    cout << "ivetor[0] = " << ivetor[0] << "\n";

    for(auto v: ivetor)
        cout << "elemento: " << v << "\n";
}
