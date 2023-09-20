#include<iostream>
#include<memory>
using std::cin, std::cout, std::endl;

int main()
{
  auto intAlocado{ std::make_unique<int>(2) };

  auto funcaoLambda = [ptr = std::move(intAlocado)]{ cout << *ptr << endl; };

  funcaoLambda();
}
