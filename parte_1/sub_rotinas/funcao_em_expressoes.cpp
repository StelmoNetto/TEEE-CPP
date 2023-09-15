#include<iostream>
using std::cin, std::cout, std::endl;

uint64_t fatorial(int n)
{
	uint64_t fatorialDeN{ 1 };

	for (int i{ 2 }; i <= n; ++i)
		fatorialDeN *= i; //Ou fatorialDeN = fatorialDeN * i;

	return fatorialDeN;
}

int main()
{
  //r = 2 * 3!
	auto r = 2 * fatorial(3);

	cout << r << " = 2 * 3!" << " = 2 * " << fatorial(3) << endl;
}
