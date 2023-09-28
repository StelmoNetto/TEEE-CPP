#include<iostream>
using std::cin, std::cout, std::endl;

struct RegistroGrande
{
    float dados[100000];
};

//Duplicação dos dados do registro
void usaUmaCopiaDoRegistro(RegistroGrande umaCopia)
{
    //No parâmetro ocorreu:
    //umaCopia = r1;
}

int main()
{
    RegistroGrande r1;
    usaUmaCopiaDoRegistro(r1);
}
