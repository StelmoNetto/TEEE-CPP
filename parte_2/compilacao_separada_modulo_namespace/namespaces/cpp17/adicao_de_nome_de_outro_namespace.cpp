#include<iostream>
using std::cin, std::cout, std::endl;

namespace A
{
 int x;
 void funcaoEmA() { std::cout << "Namespace A\n"; }
}

namespace B
{
 int x;
 using A::funcaoEmA; //Faz parte desse namespace
}

int main()
{
 using B::funcaoEmA;
 funcaoEmA();
}
