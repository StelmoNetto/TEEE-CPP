#include <iostream>
#include <vector>
using std::vector;

int main()
{
    vector objetoVector{ 2.1,1.0,3.2 };
    objetoVector.push_back(2.4); //Após 3.2

    std::cout << "elementos:\n";
    for (auto v : objetoVector)
        std::cout << v << " ";
}
