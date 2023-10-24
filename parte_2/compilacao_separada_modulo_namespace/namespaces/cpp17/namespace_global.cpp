#include<iostream>
using std::cin, std::cout, std::endl;

void funcaoEmNamespaceGlobal(){ std::cout << "Hello World!\n"; }

int main()
{
     ::funcaoEmNamespaceGlobal();
}
