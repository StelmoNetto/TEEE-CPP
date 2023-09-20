#include<iostream>
#include<functional> // Para a definição da function.
using std::cin, std::cout, std::endl;

int main()
{
	int i = 3, j = 5;

  // Captura i por valor e j por referência.
  std::function<int(void)> f = [i, &j] { return i + j; };

	i = 22; j = 44;
	// Qual será o resultado?
	cout << f() << endl; //47
}
