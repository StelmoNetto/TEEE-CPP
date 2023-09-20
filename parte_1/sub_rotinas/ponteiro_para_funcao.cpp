#include<iostream>
using std::cin, std::cout, std::endl;

float fDeX(float x) { return x * x; }

bool trocaDeSinalNoIntervalo(float a, float b,float (*funcao)(float)) //funcao é um ponteiro para uma função (fDeX) que retorna um float e possui um parâmetro float
{
  return (funcao(a) * funcao(b)) < 0;
}

int main()
{
 cout << std::boolalpha << trocaDeSinalNoIntervalo(1, 2, fDeX);
}
