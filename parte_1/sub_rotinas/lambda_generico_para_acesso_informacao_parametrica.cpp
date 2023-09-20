#include<iostream>
using std::cin, std::cout, std::endl;

int main()
{
  auto fl = []<typename T>(const T& valor) {
    T var{};
    cout << "Tipo: " << typeid(T).name() << endl;
    cout << "Valor('var'): " << var << endl;
  };

  int variavel{ 2 };
  fl(variavel);
}
