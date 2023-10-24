module Modelo;
import :Circulo;

import <cassert>;

//Com asserção: apenas raio > 0
Circulo::Circulo(const Ponto& centro, float raio) : _centro{ centro }, _raio{ raio }
{
	abortaSeRaioIncorreto();
}

float Circulo::obterRaio() const { return _raio; }

Ponto Circulo::obterCentro() const { return _centro; }

void Circulo::abortaSeRaioIncorreto()
{
	assert(("Circulo so admite raio > 0", _raio > 0));
}

bool Circulo::interiorAoCirculo(const Ponto ponto) const 
{ 
    return ponto.distancia(this->_centro) < this->_raio;
}
