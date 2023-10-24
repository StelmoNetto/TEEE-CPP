#include "DriverDeLED.h"
#include<iostream>
using std::cin, std::cout, std::endl;

DriverDeLED::DriverDeLED(cor_t cor, enderecoDaPorta_t endereco, pino_t numeroDoPino) : corDoLED{ cor }, enderecoDaPorta{ endereco }, pino { numeroDoPino }
{
    cout << "Operações bit-a-bit para funcionamento da porta LED" << endl;
}

bool DriverDeLED::estaOperacional() const
{ 
    cout << "Operações bit-a-bit para verificação do funcionamento" << endl;
    bool emOperacao{ true };

    return emOperacao;
}

void DriverDeLED::mudarCor(cor_t cor)
{ 
    corDoLED = cor; 
    cout << "Operações bit-a-bit para mudança de cor " << endl;
}

void DriverDeLED::ligar()
{
    cout << "Operações bit-a-bit para ligar o LED" << endl;
}

void DriverDeLED::desligar()
{
    cout << "Operações bit-a-bit para desligar o LED" << endl;
}