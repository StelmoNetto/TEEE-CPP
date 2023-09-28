#include <iostream>
using namespace std;

enum class ResultadoDaAutenticacao
{
	CREDENCIAIS_INVALIDAS
};

ResultadoDaAutenticacao autenticarUsuario(const char* nomeDoUsuario, const char* senha){ return ResultadoDaAutenticacao::CREDENCIAIS_INVALIDAS; }

int main()
{
    auto usuario{ "NT" }, senha{ "123" };
    ResultadoDaAutenticacao resultado = autenticarUsuario(usuario, senha);

    bool credenciaisInvalidas = resultado == ResultadoDaAutenticacao::CREDENCIAIS_INVALIDAS;
    if (credenciaisInvalidas)
        return 1;
}
