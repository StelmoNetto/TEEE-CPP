import Base;
import Derivada;

import <iostream>;
using namespace std;

int main()
{
 using Heranca::Estendendo::Sintaxe::Derivada;

 Derivada objDeDerivada{ }, segObjDeDerivada{ 2.3, 2 };
 cout << "Valor do membro da classe Base: " << objDeDerivada.obterMembro() << endl;
 cout << "Valor do membro da classe Base: " << segObjDeDerivada.obterMembro() << endl;
 cout << "Valor obtido da classe Derivada: " << segObjDeDerivada.novoMetodo() << endl;

 Heranca::Estendendo::Sintaxe::Base objDaBase{ 3 };
 cout << "Valor do membro da classe Base: " << objDaBase.obterMembro() << endl;
}
