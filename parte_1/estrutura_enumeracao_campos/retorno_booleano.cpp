#include <iostream>
using namespace std;


bool usuarioEstaAutenticado(const char* nomeDoUsuario, const char* senha)
{
    //Ordena a autenticação - Procedimento
    //Mas pergunta pelo resultado - Função
    return false;
}

int main()
{
    auto usuario{ "NT" }, senha{ "123" };
    if (!usuarioEstaAutenticado(usuario,senha))
        return 1;
}
