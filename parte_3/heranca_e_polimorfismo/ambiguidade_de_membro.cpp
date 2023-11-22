
class Janela
{
public:
//...
protected:
 bool visivel;
};

class CaixaDeDialogo : public Janela
{
protected:
 bool visivel;
};

class TecladoEmCaixaComoJanela : public CaixaDeDialogo, public Janela //CaixaDeDialogo é uma Janela
{
public:
 void virtual facaVisivel()
 {
  CaixaDeDialogo::visivel = true; //Resolvendo ambiguidade no nome dos membros

  Janela::visivel = true;
 }
};

int main()
{
    TecladoEmCaixaComoJanela teclado{};

    teclado.facaVisivel();
}
