#include<iostream>
#include<cmath>
#include<cstring>
using std::cin, std::cout, std::endl;

class Ponto
{
public:
  Ponto(int x = 0, int y = 0);
  Ponto alterarPonto(int x, int y);
  int obterX() const;
  float distancia(const Ponto& outro) const;
private:
  int _x, _y;
};

Ponto::Ponto(int x, int y) : _x{x}, _y{y}{ }

Ponto Ponto::alterarPonto(int x, int y) { return {x,y}; }

int Ponto::obterX() const
{
    return _x;
}

float Ponto::distancia(const Ponto& outro) const
{
    return sqrt(pow(outro._x - _x, 2.0) + pow(outro._y - _y, 2.0));
}

class Personagem
{
 public:
//Omitido os outros membros da API
 Personagem(const char* nome, Ponto posicao, float tamanho);

 Ponto suaPosicao() const;

 bool tocaPersonagem(const Personagem& outro) const;

 private:
 class Circulo //Ocultamento de classe - utilizada apenas internamente
 {
  public:
  Circulo(const Ponto& centro, float raio);

  Ponto obterCentro() const;
  bool interiorAoCirculo(Ponto ponto) const;

  private:
  Ponto _centro;
  float _raio;
 };

 char nome[30];
 Ponto posicao;
 float tamanho;
};

Personagem::Personagem(const char* nome, Ponto suaPosicao, float seuTamanho) : posicao{ suaPosicao }, tamanho{ seuTamanho }
{
    strcpy(this->nome,nome);
}

Ponto Personagem::suaPosicao() const { return posicao; }

bool Personagem::tocaPersonagem(const Personagem& outro) const
{
    Circulo fronteiraDoPersonagem{ posicao, tamanho };
    return fronteiraDoPersonagem.interiorAoCirculo(outro.suaPosicao());
}


Personagem::Circulo::Circulo(const Ponto& centro, float raio) : _centro{ centro }, _raio{ raio } {}

Ponto Personagem::Circulo::obterCentro() const { return _centro; }

bool Personagem::Circulo::interiorAoCirculo(Ponto ponto) const
{
    return ponto.distancia(this->_centro) < this->_raio;
}

int main()
{
    Personagem mario{ "Mario", {1,3}, 2.4 }, luigi{ "Luigi", {1,4}, 1.2};

    bool seTocam{ mario.tocaPersonagem(luigi) };
    cout << "Personagens se tocam? " << std::boolalpha << seTocam;
}