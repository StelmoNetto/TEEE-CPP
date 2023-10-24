export module Modelo:Circulo;
import :Ponto;

namespace Modelo
{
	class Circulo
	{
	public:
		Circulo(const Ponto& centro, float raio);

		float obterRaio() const;

		Ponto obterCentro() const;

		bool interiorAoCirculo(const Ponto ponto) const;

	private:
		void abortaSeRaioIncorreto();
		Ponto _centro;
		float _raio;
	};
}