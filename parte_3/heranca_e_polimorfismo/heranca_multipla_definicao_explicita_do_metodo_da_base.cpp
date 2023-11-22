#include<istream>
#include<iostream>
using std::cout, std::endl;

class Janela
{
public:
 virtual ~Janela() = default;

 virtual void mostra() { cout << "Janela está visível\n"; }

 virtual void oculta() { cout << "Janela não está visível\n"; }
};

class Teclado
{
public:
 virtual ~Teclado() = default;

 virtual void entrada(std::istream& entrada){}

 virtual void oculta() { cout << "Teclado não está visível\n"; }
};

class TecladoEmJanela : public Janela, public Teclado
{
public:
//...
 virtual void oculta() override { Janela::oculta(); } //Chamando a versão desejada
};

int main()
{
  TecladoEmJanela janelaDeEntrada;
  janelaDeEntrada.oculta();
}
