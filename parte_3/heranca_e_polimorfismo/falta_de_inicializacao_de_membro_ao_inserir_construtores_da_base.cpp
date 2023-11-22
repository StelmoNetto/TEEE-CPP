#include<string_view>
#include<iostream>

class Base
{
public:
 virtual ~Base() = default;

 Base() = default;

 Base(std::string_view str) { std::cout << str << std::endl; }

 Base(float f) { std::cout << "Construtor de Base\n"; }
};

class Derivada : public Base
{
public:
 using Base::Base;

private:
 int membro{0}; //Se não inicializado, terá "lixo", pois um construtor da Base foi chamado
};

int main()
{
 Derivada objDer{ "Está ok\n" };
}
