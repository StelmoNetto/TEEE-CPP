#include <iostream>
using namespace std;

int main()
{
    union FonteDePagamento
    {
        short horas;
        float vendas;
    };

    FonteDePagamento emprego;

    cin >> emprego.horas;
    cout << "Horas = " << emprego.horas << endl;

    cin >> emprego.vendas;
    cout << "Vendas = " << emprego.vendas<< endl;

    //O que aconteceria abaixo?
    cout << "Horas = " << emprego.horas << endl;
}
