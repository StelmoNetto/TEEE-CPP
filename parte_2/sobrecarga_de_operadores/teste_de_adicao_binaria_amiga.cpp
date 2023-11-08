#include "adicao_binaria_amiga.h"

#include <iostream>
#include <numeric>
#include <cmath>
using std::cout, std::endl, std::cin;

int main()
{
    using namespace Classes;

    UmaClasse a{ 3 };

    cout << a + 1 << endl;

    cout << 1 + a;
}
