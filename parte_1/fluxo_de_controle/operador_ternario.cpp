#include <iostream>
using std::cin,std::cout, std::endl;

int main()
{
    auto valor1{2.1}, valor2{4.4};
    double maior;

    if(valor1 >= valor2)
      maior = valor1;
    else
      maior = valor2;

    cout << "maior = " << maior << endl;

    //Uso do operador ternário
    maior = (valor1 >= valor2) ? valor1 : valor2;

    cout << "maior = " << maior << endl;
}
