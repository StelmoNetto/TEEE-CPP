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

    cout << "Entre com as horas trabalhadas:" << endl;
    cin >> emprego.horas;
    cout << "Horas = " << emprego.horas << endl;

    cout << "Entre com quantidade de vendas:" << endl;
    cin >> emprego.vendas;
    cout << "Vendas = " << emprego.vendas<< endl;

    //O que aconteceria abaixo?
    cout << "Horas = " << emprego.horas << endl;
}