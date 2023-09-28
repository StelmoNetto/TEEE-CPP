#include<iostream>
using std::cin, std::cout, std::endl;

int main()
{
    struct MeuCampoDeBits
    {
        unsigned short campo1 : 3; //3 bits - Recomenda-se ser sempre inteiro não sinalizado
        unsigned short campo2 : 2; //2 bits
        unsigned short : 0; //Campo anônimo 0 força o alinhamento para próximo campo
        unsigned short campo3: 10; //10 bits - Próximo word (16 bits) do short
    };

    MeuCampoDeBits campos{3}; // //campo1 = 3, campo2 = 0, campo3 = 0

    cout << "campo1 = " << campos.campo1 << endl;
    cout << "campo2 = " << campos.campo2 << endl;
    cout << "campo3 = " << campos.campo3 << endl;
}
