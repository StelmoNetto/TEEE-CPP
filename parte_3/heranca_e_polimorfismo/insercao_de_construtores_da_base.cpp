#include<string_view>
#include<iostream>

class Base
{
public:
 virtual ~Base() = default;

 Base() = default;

 Base(std::string_view str) { std::cout << str << std::endl; }
};

//Incluindo o construtor de Base
class Derivada : public Base
{
public:
 using Base::Base; //Faz com que herde todos os construtores de Base

 Derivada(int i){}
};

int main()
{
 Derivada objDer{"Está ok\n"};
}
