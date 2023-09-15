#include<iostream>
using std::cin, std::cout, std::endl;

auto soma(double a, double b) -> double
{
	return a + b;
}

int main()
{
    cout << soma(1.0, 2.5);
}
