#include<iostream>
using std::cin, std::cout, std::endl;

void f(double n, double m)
{
     cout << __func__ << "(" << typeid(n).name() << "," << typeid(m).name() << ")" << endl; 
}

void f(int n, char m)
{ 
    cout << __func__ << "(" << typeid(n).name() << "," << typeid(m).name() << ")" << endl; 
}

int main()
{
    f(98, 99); //Chama #2. Identidade perfeita
    f(5.3, 4); //Chama #1. Identidade compatível: Converteu 2º parâmetro para double
    f(4.3, 5.2); //Chama #1. Identidade perfeita
    f(4, 1.3); //Chama??? Erro: ambas compatíveis. Solução: Casting
}
