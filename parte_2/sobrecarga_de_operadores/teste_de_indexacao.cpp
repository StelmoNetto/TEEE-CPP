#include "indexacao.h"

#include <iostream>
#include <numeric>
using std::cout, std::endl, std::cin;

int main()
{
    using namespace Classes;

    UmaClasse a{ 3 }, b{ 1 };

    cout << "a + b = " << a[b] << "\n";
}
