#include<iostream>
#include<cmath>
using std::cin, std::cout, std::endl;

float distancia(float x2, float y2, float x1 = 0.0F, float y1 = 0.0F)
{
    return std::sqrt(std::pow(x2 - x1, 2.0) + std::pow(y2 - y1, 2.0));
}

int main()
{
    cout << distancia(2,1) << endl; //Entre os pontos (2,1) e (0,0)
    cout << distancia(2,1, -1) << endl; //Entre os pontos (2,1) e (-1,0)
    cout << distancia(2,1, -1,1) << endl; //Entre os pontos (2,1) e (-1,1)
}
