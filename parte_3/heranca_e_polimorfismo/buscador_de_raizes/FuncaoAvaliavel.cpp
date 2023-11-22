#include "FuncaoAvaliavel.h"

Funcao::Funcao(size_t dimensao, std::string expressao) : _dimensao{ dimensao }, expressaoDaFuncao{ expressao }{}

std::string Funcao::expressao() const { return expressaoDaFuncao; }

size_t Funcao::dimensaoDoDominio() const { return _dimensao; }
