#include<iostream>
using std::cin, std::cout, std::endl;

enum DIAS { seg = 2, ter, qua, qui, sex, sab, dom = 1 };
int main()
{
    DIAS dia;

    if (dia = seg; dia == 2)
        cout << "Hoje e segunda\n";

    int a = dia;
    ++a;

    if (a == ter)
        cout<<"Hoje e terca\n";
}
