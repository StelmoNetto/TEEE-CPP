#include<iostream>
using std::cin, std::cout, std::endl;

int main()
{
  auto fl{ [](const auto& valor) {
      using T = std::decay_t<decltype(valor)>; //decay_t remove qualificadores const e referência
      T var{};
      cout << "Tipo: " << typeid(T).name() << endl;
      cout << "Valor('var'): " << var << endl;
    }
  };

  int variavel{ 2 };
  fl(variavel);
}
