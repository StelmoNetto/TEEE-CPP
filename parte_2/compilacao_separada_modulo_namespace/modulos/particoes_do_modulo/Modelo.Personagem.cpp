module Modelo;
import :Personagem;

import <cstring>;

Personagem::Personagem(const char* nome, Ponto posicao, float tamanho) : fronteiraDoPersonagem{ posicao, tamanho }
{
    strcpy_s(this->nome,nome);
}

Ponto Personagem::suaPosicao() const 
{ 
	return fronteiraDoPersonagem.obterCentro(); 
}

bool Personagem::tocaPersonagem(const Personagem& outro) const 
{ 
	return fronteiraDoPersonagem.interiorAoCirculo(outro.suaPosicao());
}
