#include<iostream>
#include<array>
using std::cin, std::cout, std::endl;

int main()
{
    int ponto[]{ 3,4 };
    auto[x, y] = ponto;
    cout << "x = " << x << " y = " << y << endl;

    std::array<int, 2> vetor{ 1,2 }; //Objeto semelhante a tupla
    auto&[i, j] = vetor;
    cout << "i = " << i << " j = " << j << endl;
}
