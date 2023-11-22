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

class TecladoEmJanelaComUsing : public Janela, public Teclado
{
public:
  using Janela::oculta; //Herda explicitamente a versão de janela
//...
};

int main()
{
  TecladoEmJanelaComUsing janelaDeEntrada;
  janelaDeEntrada.oculta();
}
