module Modelo;
import :Ponto;

import <cmath>;

Ponto::Ponto(int x, int y) : _x{x}, _y{y} { }

Ponto Ponto::alterarPonto(int x, int y) { return {x,y}; }

float Ponto::distancia(const Ponto& outro) const
{
    return sqrt(pow(outro._x - _x, 2.0) + pow(outro._y - _y, 2.0));
}
