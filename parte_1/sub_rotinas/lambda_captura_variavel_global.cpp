#include <iostream>
using std::cin, std::cout, std::endl;

int variavelGlobal{ 1 };

int main()
{
   [=]{ variavelGlobal = 2; }();

   cout << variavelGlobal;
}
