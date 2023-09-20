#include<iostream>
using std::cin, std::cout, std::endl;

void exibePrimeiroParametro(int parametro1, [[maybe_unused]] int parametro2)
{
  cout << parametro1 << endl;
}

int main()
{
    exibePrimeiroParametro(1,2);
}
