export module Modelo:Ponto;

class Ponto
{
public:
  Ponto(int x = 0, int y = 0);
  Ponto alterarPonto(int x, int y);
  float distancia(const Ponto& outro) const;

private:
	int _x, _y;
};
