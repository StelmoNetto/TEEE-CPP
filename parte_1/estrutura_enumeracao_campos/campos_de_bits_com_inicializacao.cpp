#include<iostream>
using std::cin, std::cout, std::endl;

int main()
{
    struct MeuCampoDeBits
    {
        unsigned short campo1 : 3; //3 bits - Recomenda-se ser sempre inteiro não sinalizado
        unsigned short campo2 : 2; //2 bits
        unsigned short campo3: 10 = 12; //10 bits – C++20 permite fazer inicialização
    };

    MeuCampoDeBits campos{3,1}; //campo1 = 3, campo2 = 1, campo3 = 12

    cout << "campo1 = " << campos.campo1 << endl;
    cout << "campo2 = " << campos.campo2 << endl;
    cout << "campo3 = " << campos.campo3 << endl << endl;

    campos.campo3 = 20;

    cout << "campo1 = " << campos.campo1 << endl;
    cout << "campo2 = " << campos.campo2 << endl;
    cout << "campo3 = " << campos.campo3 << endl;
}
