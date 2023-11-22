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
 using Base::Base; //Incluindo o construtor de Base

 Derivada(int i){}

 Derivada(float f) : Base{f} //Oculta o construtor de Base e gera uma nova versão com parâmetro float
 {
    std::cout << "Construtor sobrecarregado de Derivada\n";
 }
};

int main()
{
 Derivada objDer{1.f};
}
