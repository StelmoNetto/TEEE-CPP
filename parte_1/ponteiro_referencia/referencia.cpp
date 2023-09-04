#include<iostream>
using std::cin,std::cout, std::endl;

int main()
{
    auto massa{ 4.3f };
    auto peso{ 1.0f };

    float& referenciaParaMassa = massa;
    referenciaParaMassa = 4.0f;
    cout << massa << endl;

    referenciaParaMassa = peso; //Não muda a referência, mas o valor de massa
    cout << massa << endl;

    const int& referenciaConstante = 2; //referenciaConstante nunca mudará de valor. Ver OBS 2.
}
