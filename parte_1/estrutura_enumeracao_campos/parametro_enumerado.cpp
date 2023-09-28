#include <iostream>
using namespace std;

enum class EstadoDoUsuario
{
	  ATIVO,
    SENHA_EXPIRADA
};

template<typename... Tipos>
void defineEstadoDoUsuario(Tipos... estado){}

int main()
{
    defineEstadoDoUsuario(EstadoDoUsuario::ATIVO);
    //Ou
    defineEstadoDoUsuario(EstadoDoUsuario::ATIVO,EstadoDoUsuario::SENHA_EXPIRADA);
}
