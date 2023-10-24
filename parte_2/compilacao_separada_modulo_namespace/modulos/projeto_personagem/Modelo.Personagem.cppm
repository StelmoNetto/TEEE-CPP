export module Modelo:Personagem;
import :Ponto;
import :Circulo;

namespace Modelo
{
	export class Personagem
	{
	public:
		//Omitido os outros membros da API
		Personagem(const char* nome, Ponto posicao, float tamanho);

		Ponto suaPosicao() const;

		bool tocaPersonagem(const Personagem& outro) const;

	private:
		char nome[30];
		Circulo fronteiraDoPersonagem;
	};
}