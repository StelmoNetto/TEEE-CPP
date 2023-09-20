#include<iostream>
using std::cin, std::cout, std::endl;

int main()
{
	int m = 0;
	int n = 0;

	[&, n](int a) mutable { m = ++n + a; }(4); //Definição e chamada
}
