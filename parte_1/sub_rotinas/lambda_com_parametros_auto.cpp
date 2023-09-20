#include<iostream>
#include<string>
using std::cin, std::cout, std::endl;
using namespace std::literals;

int main()
{
  auto ladd2 = [](auto const a, auto const b) -> decltype(auto){ return a + b; }; //Retorno a direita
  cout << ladd2(1,2.1) << endl;

  auto ladd = [](auto const a, auto const b) { return a + b; }; //Retorno a esquerda
  cout << ladd("cadeia"s," outra") << endl;
}
