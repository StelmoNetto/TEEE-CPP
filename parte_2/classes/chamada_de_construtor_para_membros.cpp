#include<iostream>
using std::cin, std::cout, std::endl;

class Particula
{
public:
  Particula(int carga) :_carga{ carga }{}
  int obterCarga(){ return _carga; }
private:
  int _carga;
};

class Atomo //versão correta
{
public:
  Atomo() : proton{1}{} // inicializando objeto
  Particula obterProton(){ return proton; }
private:
  Particula proton;
};


int main()
{
  Atomo helio, helio2{};
  cout << helio.obterProton().obterCarga() << endl;
  cout << helio2.obterProton().obterCarga() << endl;
}
