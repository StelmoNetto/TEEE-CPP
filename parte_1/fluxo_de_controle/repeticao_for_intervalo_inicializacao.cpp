#include <iostream>
using std::cin,std::cout, std::endl;

int main()
{
    cout << "Elementos da 1ª lista:\n";
    for (int vetor[]{ 1,3,2,4 }; auto e : vetor)
      cout << e << endl;
}
