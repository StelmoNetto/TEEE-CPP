#include<iostream>
#include<string>
using std::cin, std::cout, std::endl;

template<typename T>
void trocarValores(T& a, T& b);

int main()
{
  int vA = 2, vB = 1;
  cout << "Antes:\n A = " << vA << " B = " << vB << endl;
  trocarValores<int>(vA, vB);
  cout << "Depois:\n A = " << vA << " B = " << vB << endl;

  std::string cadeia1{ "string" }, cadeia2{ "outra" };
  cout << "Antes:\n A = " << cadeia1 << " B = " << cadeia2 << endl;
  trocarValores<std::string>(cadeia1, cadeia2);
  cout << "Depois:\n A = " << cadeia1 << " B = " << cadeia2 << endl;
}

template<typename T>
void trocarValores(T& a, T& b)
{
  T copiaDeA{ a };
  a = b;
  b = copiaDeA;
}
