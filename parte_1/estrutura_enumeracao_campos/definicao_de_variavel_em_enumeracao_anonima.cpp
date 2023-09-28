#include<iostream>
using std::cin, std::cout, std::endl;

int main()
{
    enum { seg = 2, ter, qua, qui, sex, sab, dom = 1 } diaDaSemana;

    diaDaSemana = ter;

    cout << diaDaSemana;
}
