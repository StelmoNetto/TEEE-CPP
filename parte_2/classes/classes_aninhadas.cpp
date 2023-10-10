#include<iostream>
#include<cmath>
using std::cin, std::cout, std::endl;

class UmaClasse
{
    public:
    class Ponto
    {
    public:
    Ponto(int x = 0, int y = 0);
    Ponto alterarPonto(int x, int y);
    int obterX() const;
    float distancia(const Ponto& outro) const;

    private:
    int _x, _y;
    static size_t cont;
    const size_t id;
    };

};

UmaClasse::Ponto::Ponto(int x, int y) : _x{x}, _y{y}, id{cont++} { cout << "id = " << id << endl; }

UmaClasse::Ponto UmaClasse::Ponto::alterarPonto(int x, int y) { return {x,y}; }

int UmaClasse::Ponto::obterX() const { return _x; }

float UmaClasse::Ponto::distancia(const Ponto& outro) const
{
    return sqrt(pow(outro._x - _x, 2.0) + pow(outro._y - _y, 2.0));
}


size_t UmaClasse::Ponto::cont;

int main()
{
  UmaClasse::Ponto centro{ 1,1 };
  //UmaClasse umObjeto{ centro };
}
